using System;
using System.Collections.Generic;
using System.Text;

namespace SvgGenerator
{
    public class SvgBuilder
    {
        private readonly string XML_HEADER = "<?xml version='1.0' encoding='utf-8'?>";
        private readonly string SVG_FILE_HEADER = "<!DOCTYPE svg PUBLIC '-//W3C//DTD SVG 1.1//EN' 'http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd'>";

        private readonly string SVG_TAG_HEADER = "<svg version='1.1' id='Layer_1' xmlns='http://www.w3.org/2000/svg' xmlns:xlink='http://www.w3.org/1999/xlink' x='0px' y='0px' width='10000px' height='10000px' viewBox='0 0 10000 10000' enable-background='new 0 0 10000 10000' xml:space='preserve'>";
        private readonly string SVG_TAG_FOOTER = "</svg>";

        private readonly string RECT_TEMPLATE = "<rect width='{0}' height='{1}' x='{2}' y='{3}' style='fill:rgb({4},{5},{6})' />";

        private readonly string CIRC_TEMPLATE = "<circle cx='{0}' cy='{1}' r='{2}' style='fill:rgb({3},{4},{5})' />";


        public string Build(List<Square> squares, List<Circle> circles)
        {
            string svg = XML_HEADER
                + SVG_FILE_HEADER
                + SVG_TAG_HEADER;
            foreach (var square in squares)
            {
                svg += BuildRect(square.Size, square.Size, square.X, square.Y, square.color.R, square.color.G, square.color.B);
            }
            foreach (var circle in circles)
            {
                svg += BuildCirc(circle.CX, circle.CY, circle.Radius, circle.color.R, circle.color.G, circle.color.B);
            }

            return svg + SVG_TAG_FOOTER;
        }

        private string BuildRect(int width, int height, int x, int y, int red, int green, int blue)
        {
            return String.Format(RECT_TEMPLATE, width, height, x * Square.SquareSize, y * Square.SquareSize, red, green, blue);
        }

        private string BuildCirc(int cx, int cy, int r, int red, int green, int blue)
        {
            return String.Format(CIRC_TEMPLATE, (cx*Circle.CircleRadius)+25, (cy*Circle.CircleRadius)+25, r/2, red, green, blue);
        }
    }
}


