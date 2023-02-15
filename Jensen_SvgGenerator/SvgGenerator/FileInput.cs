using System;
using System.Collections.Generic;
using System.Drawing;
using System.IO;

namespace SvgGenerator
{
    public class FileInput
    {
        public static void File(string outputFile, string titleFileName)
        {
            string[] values = FindFile.FileFinder(titleFileName);
            List<Square> squares = new List<Square>();
            List<Circle> circles = new List<Circle>();
            for (int i = 0; i < values.Length - 1;)
            {
                int valueNumsX = int.Parse(values[i].Trim());
                int valueNumsY = int.Parse(values[i + 1].Trim());
                if (values[i + 3].Trim() == "Square" || values[i + 3].Trim() == "square")
                {
                    if (values[i + 2].Trim() == "Yes")
                    {
                        AddShape.ShapeAdd(values.Length / 5, squares, i, "yes", values[i+4].Trim());
                    }
                    else
                    {
                        AddShape.ShapeAdd(values.Length / 5, squares, i, "no", values[i + 4].Trim());
                    }
                }
                if (values[i + 3].Trim() == "Circle" || values[i + 3].Trim() == "circle")
                {
                    if (values[i + 2].Trim() == "Yes")
                    {
                        AddShape.ShapeAdd(values.Length / 5, circles, i, "yes", values[i+4].Trim());
                    }
                    else
                    {
                        AddShape.ShapeAdd(values.Length / 5, circles, i, "no", values[i + 4].Trim());
                    }
                }
                i = i + 5;
            }
            AddSVGtoFile.CreateBuildFileSVG(outputFile, squares, circles);
        }
    }
}
