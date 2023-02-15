using System;
using System.Collections.Generic;
using System.Drawing;
using System.IO;

namespace SvgGenerator
{
    public class ManInput
    {
        public static void Man(string outputFile)
        {
            Console.WriteLine("How many squares/circles do you want in your SVG file?");
            string shapeCount = Console.ReadLine();
            int numShapeCount = Convert.ToInt32(shapeCount);
            List<Circle> circles = new List<Circle>();
            List<Square> squares = new List<Square>();
            for (int i = 0; i < numShapeCount; i++)
            {
                Console.WriteLine("Would you like a square or a circle?");
                string answer = Console.ReadLine();
                Console.WriteLine("Would you like to add some noise? Y or N");
                string noiseResponse = Console.ReadLine();
                if (answer == "square" || answer == "Square")
                {
                    string squareColor;
                    Console.WriteLine("What is the color of your square?");
                    squareColor = Console.ReadLine();
                    AddShape.ShapeAdd(numShapeCount, squares, i, noiseResponse, squareColor);
                }
                if (answer == "circle" || answer == "Circle")
                {
                    string circleColor;
                    Console.WriteLine("What is the color of your circle?");
                    circleColor = Console.ReadLine();
                    AddShape.ShapeAdd(numShapeCount, circles, i, noiseResponse, circleColor);
                }
            }
            AddSVGtoFile.CreateBuildFileSVG(outputFile, squares, circles);
        }
    }
}
