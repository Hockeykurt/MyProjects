using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//svg

namespace WinFormsApp1
{
    public class GUIClass1
    {
        public void Create(OutputFileModel model)
        {
            var sb = new StringBuilder();

            for (int i=0; i<model.Shapes.Count; i++)
            {
                sb.AppendLine($"{i+1}, 1, {model.Shapes[i].Item1}, {model.Shapes[i].Item2}, {model.Shapes[i].Item3}");
            }

            File.WriteAllText(model.OutputFileName, sb.ToString());
        }
    }
}
