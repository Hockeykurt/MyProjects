using System;
using System.Collections.Generic;
using System.Drawing;
using System.IO;

namespace SvgGenerator
{
    public class AddShape
    {
        public static void ShapeAdd(int numShapeCount, List<Circle> circles, int i, string noiseResponse, string circleColor)
        {
            int rndY = i;
            int rndX = 0;
            int red = Color.FromName(circleColor).R;
            int green = Color.FromName(circleColor).G;
            int blue = Color.FromName(circleColor).B;

            if (noiseResponse == "Y" || noiseResponse == "y" || noiseResponse == "Yes" || noiseResponse == "yes")
            {
                Rando.randomValues(numShapeCount, i, out rndY, out rndX, circleColor, ref red, ref green, ref blue);
            }
            Circle circleQ = new Circle(Color.FromArgb(Color.FromName(circleColor).A, red, green, blue), rndY, rndX);
            circles.Add(circleQ);
        }
        public static void ShapeAdd(int numShapeCount, List<Square> squares, int i, string noiseResponse, string squareColor)
        {
            int rndY = i;
            int rndX = 0;
            int red = Color.FromName(squareColor).R;
            int green = Color.FromName(squareColor).G;
            int blue = Color.FromName(squareColor).B;

            if (noiseResponse == "Y" || noiseResponse == "y" || noiseResponse == "Yes" || noiseResponse == "yes")
            {
                Rando.randomValues(numShapeCount, i, out rndY, out rndX, squareColor, ref red, ref green, ref blue);
            }
            Square squareQ = new Square(Color.FromArgb(Color.FromName(squareColor).A, red, green, blue), rndY, rndX);
            squares.Add(squareQ);
        }
    }
}
