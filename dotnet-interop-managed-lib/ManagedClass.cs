using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace dotnet_interop_net_lib
{
    public class ManagedClass
    {
        public void WriteToConsole(string message)
        {
            Console.WriteLine(message);
        }
    }
}
