using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//svg

namespace WinFormsApp1
{
    public class OutputFileModel
    {
        public string OutputFileName { get; set; }
        public List<Tuple<string, string, string>> Shapes { get; set; } 
            = new List<Tuple<string, string, string>>();
    }
}
