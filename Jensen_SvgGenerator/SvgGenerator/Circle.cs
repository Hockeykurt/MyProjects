using System;
using System.Collections.Generic;
using System.Drawing;
using System.Text;

namespace SvgGenerator
{
    public class Circle
    {
        public readonly static int CircleRadius = 50;
        public Color color { get; set; }
        public int CX { get; set; }
        public int CY { get; set; }
        public int Radius { get; set; }

        public Circle(Color color, int cx, int cy, int r = 50)
        {
            this.color = color;
            this.CX = cx;
            this.CY = cy;
            this.Radius = r;
        }

        public Circle()
        { }
    }
}
