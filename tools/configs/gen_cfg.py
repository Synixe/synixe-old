REPLACE = {
    "rhs_mag_m18_green": "SmokeShellGreen",
    "rhs_mag_m18_purple": "SmokeShellPurple",
    "rhs_mag_m18_red": "SmokeShellRed",
    "rhs_mag_m18_yellow": "SmokeShellYellow",
    "rhs_mag_an_m8hc": "SmokeShellWhite",
    "rhs_mag_m67": "HandGrenade",
    "rhs_mag_rgo": "HandGrenade",
    "rhs_mag_rgn": "MiniGrenade",
    "rhs_mag_mk84": "ACE_M84",
    "rhs_mag_an_m14_th3": "ACE_M14",
    "rhsusf_m112_mag": "DemoCharge_Remote_Mag",
    "rhsusf_m112x4_mag": "SatchelCharge_Remote_Mag",
    "FirstAidKit": ["ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"],
    "Medikit": [
        "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing",
        "ACE_fieldDressing", "ACE_fieldDressing", "ACE_bloodIV", "ACE_bloodIV",
        "ACE_bloodIV", "ACE_bloodIV", "ACE_bloodIV_500", "ACE_bloodIV_500",
        "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine",
        "ACE_morphine", "ACE_morphine", "ACE_morphine"],
    "Medikit": [
        "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing",
        "ACE_fieldDressing", "ACE_fieldDressing", "ACE_bloodIV", "ACE_bloodIV",
        "ACE_bloodIV", "ACE_bloodIV", "ACE_bloodIV_500", "ACE_bloodIV_500",
        "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine",
        "ACE_morphine", "ACE_morphine", "ACE_morphine"]
}

ACE_ADVANCED = [
    "ACE_atropine", "ACE_elasticBandage", "ACE_quikclot",
    "ACE_packingBandage", "ACE_personalAidKit", "ACE_plasmaIV",
    "ACE_plasmaIV_250", "ACE_plasmaIV_500", "ACE_salineIV", "ACE_salineIV_250",
    "ACE_salineIV_500", "ACE_surgicalKit", "ACE_tourniquet"
]

HIDE_ACE_ADVANCED = True

items_replaced = 0

import json

with open("aio.json", encoding="UTF-8") as aio:
    data = json.load(aio)["bin\\config.bin"]

vehicles = data["CfgVehicles"]
weapons = data["CfgWeapons"]
magazines = data["CfgMagazines"]
patches = data["CfgPatches"]

playable = ["CAManBase"]
bases = {"CfgVehicles": [], "CfgWeapons": [], "CfgMagazines": [], "Containers": []}
units = []
containers = []

items = []
mags = []

output = []
out_containers = []

for vehicle in vehicles.keys():

    if isinstance(vehicles[vehicle], int):
        continue

    if ":" in vehicle:
        name, base = vehicle.split(": ")
    else:
        name = vehicle
        base = None

    if base in playable:
        playable.append(name)
        units.append([name, base])

    if "TransportItems" in vehicles[vehicle]:
        containers.append([name, base])

    if name in REPLACE.keys():
        items.append([name, base])
        if base not in bases["CfgVehicles"]:
            bases["CfgVehicles"].append(base)

for weapon in weapons.keys():
    if ":" in weapon:
        name, base = weapon.split(": ")
    else:
        name = weapon
        base = None

    if name in REPLACE.keys():
        items.append([name, base])
        if base not in bases["CfgWeapons"]:
            bases["CfgWeapons"].append(base)
    if HIDE_ACE_ADVANCED and name in ACE_ADVANCED:
        items.append([name, base])
        if base not in bases["CfgWeapons"]:
            bases["CfgWeapons"].append(base)

for magazine in magazines.keys():
    if ":" in magazine:
        name, base = magazine.split(": ")
    else:
        name = magazine
        base = None

    if name in REPLACE.keys():
        mags.append([name, base])
        if base not in bases["CfgMagazines"]:
            bases["CfgMagazines"].append(base)

for unit in units:
    config = vehicles[": ".join(unit)]

    changed = False

    if "Items" in config:
        config["items"] = config["Items"]

    if "items" in config:
        changed = False
        new_items = ["CHANGED"]
        for item in config["items"]:
            if item in REPLACE:
                changed = True
                items_replaced += 1
                if isinstance(REPLACE[item], list):
                    for i in REPLACE[item]:
                        new_items.append(i)
                else:
                    new_items.append(REPLACE[item])
            else:
                new_items.append(item)
        config["items"] = new_items


    if "Magazines" in config:
        config["magazines"] = config["Magazines"]

    if "magazines" in config:
        new_mag = ["CHANGED"]
        for mag in config["magazines"]:
            if mag in REPLACE:
                changed = True
                items_replaced += 1
                if isinstance(REPLACE[mag], list):
                    for i in REPLACE[mag]:
                        new_mag.append(i)
                else:
                    new_mag.append(REPLACE[mag])
            else:
                new_mag.append(mag)
        config["magazines"] = new_mag

    if changed:
        output.append(unit)
        if unit[1] not in bases["CfgVehicles"]:
            bases["CfgVehicles"].append(unit[1])

for container in containers:
    config = vehicles[": ".join(container)]
    changed = False
    new_items = {}
    for name in config["TransportItems"].keys():
        item = config["TransportItems"][name]
        if item['name'] in REPLACE:
            changed = True
            items_replaced += 1
            if isinstance(REPLACE[item['name']], list):
                added = []
                for i in REPLACE[item['name']]:
                    if i not in added:
                        new_items["_xx_"+i] = {"name": i, "count": REPLACE[item['name']].count(i) * item['count']}
                        added.append(i)
            else:
                new_items["_xx_"+REPLACE[item['name']]] = {"name": REPLACE[item['name']], "count": item['count']}
            new_items[name] = {"name": item['name'], "count": 0}
        else:
            new_items[name] = {"name": item['name'], "count": item['count']}

    if changed:
        config["TransportItems"] = new_items
        out_containers.append(container)
        if container[1] not in bases["Containers"]:
            bases["Containers"].append(container[1])

print("Items Replaced: {}".format(items_replaced))

fixed = -1
while fixed != 0:
    fixed = 0
    defined_containers = []
    container_names = [c[0] for c in out_containers]
    offset = 0
    for i, container in enumerate(out_containers.copy()):
        defined_containers.append(container[0])
        if container[1] in container_names and container[1] not in defined_containers:
            out_containers += [out_containers.pop(i - offset)]
            offset += 1
            fixed += 1
            print("Reorder", container[0])

def out(text):
    return str(text).replace("[","{").replace("]","}")

with open("CfgVehicles.hpp", "w") as config:
    config.write("//DO NOT EDIT\n")
    config.write("//THIS IS A GENERATED FILE\n\n")
    config.write("class CfgVehicles {\n")
    modified = [unit[0] for unit in output]
    for vehicle in bases["CfgVehicles"]:
        if vehicle not in modified:
            config.write("  class {};\n".format(vehicle))
    for vehicle in output:
        unit = vehicles[": ".join(vehicle)]
        config.write("  class {}: {} {{\n".format(vehicle[0], vehicle[1]))
        if "magazines" in unit and unit["magazines"][0] == "CHANGED":
            config.write("    magazines[] = {};\n".format(out(unit["magazines"][1:])))
            config.write("    respawnMagazines[] = {};\n".format(out(unit["magazines"][1:])))
        if "items" in unit and unit["items"][0] == "CHANGED":
            config.write("    items[] = {};\n".format(out(unit["items"][1:])))
            config.write("    respawnItems[] = {};\n".format(out(unit["items"][1:])))
        config.write("  };\n")
    modified = [veh[0] for veh in out_containers]
    for vehicle in bases["Containers"]:
        if vehicle not in modified:
            config.write("  class {};\n".format(vehicle))
    for vehicle in out_containers:
        container = vehicles[": ".join(vehicle)]
        config.write("  class {}: {} {{\n".format(vehicle[0], vehicle[1]))
        config.write("    class TransportItems {\n")
        for item in container["TransportItems"].keys():
            config.write("      class {} {{\n".format(item))
            data = container["TransportItems"][item]
            config.write("        name = \"{}\";\n".format(data['name']))
            config.write("        count = {};\n".format(data['count']))
            config.write("      };\n")
        config.write("    };\n")
        config.write("  };\n")
    config.write("};\n")
    config.write("class CfgWeapons {\n")
    modified = [item[0] for item in items]
    for weapon in bases["CfgWeapons"]:
        if weapon not in modified:
            config.write("  class {};\n".format(weapon))
    for weapon in items:
        item = weapons[": ".join(weapon)]
        config.write("  class {}: {} {{\n".format(weapon[0], weapon[1]))
        config.write("    ace_arsenal_hide = 1;\n")
        config.write("  };\n")
    config.write("};\n")
    config.write("class CfgMagazines {\n")
    modified = [item[0] for item in mags]
    for mag in bases["CfgMagazines"]:
        if mag not in modified:
            config.write("  class {};\n".format(mag))
    for mag in mags:
        item = magazines[": ".join(mag)]
        config.write("  class {}: {} {{\n".format(mag[0], mag[1]))
        config.write("    ace_arsenal_hide = 1;\n")
        config.write("  };\n")
    config.write("};")

with open("requirements.hpp", "w") as config:
    modified = [unit[0] for unit in output]
    weapons = [item[0] for item in items]
    config.write("requiredAddons[] = { ")
    text = ""
    for patch in patches:
        data = patches[patch]
        if "units" in data:
            if len(data["units"]) != 0 and len(list(set(data["units"]) - set(modified))) < len(data["units"]):
                text += "\"{}\", ".format(patch)
                continue
        if "weapons" in data:
            if len(data["weapons"]) != 0 and len(list(set(data["weapons"]) - set(weapons))) < len(data["weapons"]):
                text += "\"{}\", ".format(patch)

    config.write(text[:-2]+"};")
