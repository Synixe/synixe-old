class CfgPatches
{
	class FEMAL3_v2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};
class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class Default;
		class Arnott: Default
		{
			name = "Arnott";
			displayname = "Arnott";
			identityTypes[] = {"Head_NATO"};
			head = "Arnott";
			material = "FEMAL3_v2\Data\FEM_arnott.rvmat";
			texture = "FEMAL3_v2\Data\FEM_arnott_co.paa";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White.rvmat";
		};
		class Arnott_h: Default
		{
			name = "Arnott_hair";
			displayname = "Arnott (hair)";
			identityTypes[] = {"Head_NATO"};
			head = "Arnott_hair";
			material = "FEMAL3_v2\Data\FEM_arnott.rvmat";
			texture = "FEMAL3_v2\Data\FEM_arnott_co.paa";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
		};
	};
};
class CfgHeads
{
	class Default_A3;
	class Arnott: Default_A3
	{
		model = "FEMAL3_v2\FEM_arnott.p3d";
	};
	class Arnott_hair: Default_A3
	{
		model = "FEMAL3_v2\FEM_arnott_h.p3d";
	};
};
