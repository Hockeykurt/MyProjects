using System;
using System.Collections.Generic;
using System.Drawing;
using System.IO;

namespace SvgGenerator
{
    public class AddSVGtoFile
    {
        public static void CreateBuildFileSVG(string outputFile, List<Square> squares, List<Circle> circles)
        {
            SvgBuilder svgBuilder = new SvgBuilder();
            string SVG = svgBuilder.Build(squares, circles);

            FileCreator Myfilecreater = new FileCreator();
            Myfilecreater.Create(outputFile, SVG);
        }
    }
}
