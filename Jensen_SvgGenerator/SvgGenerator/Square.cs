using System;
using System.Collections.Generic;
using System.Drawing;
using System.Text;

namespace SvgGenerator
{
    public class Square
    {
        public readonly static int SquareSize = 50;
        public Color color { get; set; }
        public int X { get; set; }
        public int Y { get; set; }
        public int Size { get; set; }

        public Square(Color color, int x, int y, int size = 50)
        {
            this.color = color;
            this.X = x;
            this.Y = y;
            this.Size = size;
        }

        public Square()
        { }
    }
}

