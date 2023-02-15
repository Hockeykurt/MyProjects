using System;
using System.Collections.Generic;
using System.Drawing;
using System.IO;

namespace SvgGenerator
{
    public class Rando
    {
        public static void randomValues(int numShapeCount, int i, out int rndY, out int rndX, string shapeColor, ref int red, ref int green, ref int blue)
        {
            Random rnd = new Random();
            Random rndColor = new Random();
            rndY = rnd.Next(0, i);
            rndX = rnd.Next(0, numShapeCount + 1);
            if (Color.FromName(shapeColor).R > 50)
            {
                red = rndColor.Next(Color.FromName(shapeColor).R - 50, Color.FromName(shapeColor).R);
            }
            if (Color.FromName(shapeColor).G > 50)
            {
                green = rndColor.Next(Color.FromName(shapeColor).G - 50, Color.FromName(shapeColor).G);
            }
            if (Color.FromName(shapeColor).B > 50)
            {
                blue = rndColor.Next(Color.FromName(shapeColor).B - 50, Color.FromName(shapeColor).B);
            }
        }
    }
}
