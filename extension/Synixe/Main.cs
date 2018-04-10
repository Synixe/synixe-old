using DiscordRpcDemo;
using System.Runtime.InteropServices;
using System.Text;

namespace Synixe
{

    public class Data
    {
        private Data(){}

        public DiscordRpc.RichPresence presence;
        public DiscordRpc.EventHandlers handlers;

        private static readonly Data data = new Data();
        public static Data GetData() { return data; }
    }

    public class Main
    {
        [DllExport("RVExtensionVersion", CallingConvention = CallingConvention.Winapi)]
        public static void RVExtensionVersion(StringBuilder output, int outputSize)
        {
            output.Append("1.0.0");
        }

        [DllExport("RVExtension", CallingConvention = CallingConvention.Winapi)]
        public static void RvExtension(StringBuilder output, int outputSize, [MarshalAs(UnmanagedType.LPStr)] string function)
        {
            outputSize--;
            switch(function)
            {
                case "setup":
                    //Initialize RPC
                    Data data = Data.GetData();
                    data.handlers = new DiscordRpc.EventHandlers();

                    output.Append("Setup Done");

                    DiscordRpc.Initialize("411594868293500938", ref data.handlers, true, null);
                    break;
            }
        }

        [DllExport("RVExtensionArgs", CallingConvention = CallingConvention.Winapi)]
        public static int RvExtensionArgs(StringBuilder output, int outputSize,
            [MarshalAs(UnmanagedType.LPStr)] string function,
            [MarshalAs(UnmanagedType.LPArray, ArraySubType = UnmanagedType.LPStr, SizeParamIndex = 4)] string[] args, int argCount)
        {
            outputSize--;
            switch(function)
            {
                case "update":
                    Data data = Data.GetData();
                    data.presence.details           = args[0].Trim().Trim('"');  //Mission Name
                    data.presence.state             = args[1].Trim().Trim('"');  //Role
                    data.presence.largeImageKey     = args[2].Trim().Trim('"');  //Map engine name
                    data.presence.largeImageText    = args[3].Trim().Trim('"');  //Map friendly name

                    output.Append("Updated");

                    DiscordRpc.UpdatePresence(ref data.presence);
                    break;
            }
            return 1;
        }
    }
}
