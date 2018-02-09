class CfgPatches
{
  class Synixe
  {
    units[] = { };
    weapons[] = { };
    version = "1.0.0.0";
    versionStr = "1.0.0.0";
    versionAr[] = {1,0,0,0};
    author[] = {"Brett from Synixe"};
  };
};

class CfgFunctions {
  class Synixe {
    class Init {
      class PostInit {
        file = "\synixe_core\post.sqf";
        postInit = 1;
      };
      class ServerInit {
        file = "\synixe_core\server.sqf";
      };
      class ClientInit {
        file = "\synixe_core\client.sqf";
      };
      class ZeusInit {
        file = "\synixe_core\zeus.sqf";
      };
    };
    class Utils {
      class Breath {
        file = "\synixe_core\breath.sqf";
      }
    }
  };
};
