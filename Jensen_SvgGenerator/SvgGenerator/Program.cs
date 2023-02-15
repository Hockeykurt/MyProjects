using System;
using System.Collections.Generic;
using System.Drawing;
using System.IO;

namespace SvgGenerator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Please enter the name of the output file.");
            string outputFile = Console.ReadLine() + ".svg";
            Console.WriteLine("Do you want to manually enter the squares or read them from a file? Man or File?");
            string fileRead = Console.ReadLine();

            if (fileRead.Trim() == "Manually" || fileRead.Trim() == "manually" || fileRead.Trim() == "Man" || fileRead.Trim() == "man")
            {
                ManInput.Man(outputFile);
            }
            if (fileRead.Trim() == "file" || fileRead.Trim() == "File")
            {
                Console.WriteLine("What is the name of the file?");
                string titleFileName = Console.ReadLine();

                FileInput.File(outputFile, titleFileName);
            }
        }
    }
}