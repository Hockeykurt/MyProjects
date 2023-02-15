using Microsoft.VisualStudio.TestTools.UnitTesting;
using SvgGenerator;
using System.Collections.Generic;
using System.Drawing;
using System.Text.RegularExpressions;

namespace SvgGeneratorTests
{
    [TestClass]
    public class SvgBuilderTests
    {
        [TestMethod]
        public void CreatingOneSquareGeneratesOneRect()
        {
            var square1 = new Square(Color.Blue, 0, 0, 225);

            var shapeList = new List<Square>() { square1 };
            var svgBuilder = new SvgBuilder();
            var content = svgBuilder.Build(shapeList, null);
            Assert.IsTrue(content.Contains("rect"));
            Assert.AreEqual(1, Regex.Matches(content, "rect").Count);
        }

        [TestMethod]
        public void CreatingThreeSquareGeneratesOneRect()
        {
            var square1 = new Square(Color.Blue, 0, 0, 225);
            var square2 = new Square(Color.Red, 1, 0, 225);
            var square3 = new Square(Color.Green, 2, 0, 225);

            var shapeList = new List<Square>() { square1, square2, square3 };
            var svgBuilder = new SvgBuilder();
            var content = svgBuilder.Build(shapeList, null);
            Assert.IsTrue(content.Contains("rect"));
            Assert.AreEqual(3, Regex.Matches(content, "rect").Count);
        }
    }
}
