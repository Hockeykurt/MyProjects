using System;
using System.Collections.Generic;
using System.Drawing;
using System.IO;

namespace SvgGenerator
{
    public class FindFile
    {
        public static string[] FileFinder(string titleFileName)
        {
            StreamReader reader;
            reader = new StreamReader(titleFileName);
            string textFile = reader.ReadToEnd();
            reader.Close();
            string[] values = textFile.Split(',', '\n');
            return values;
        } 
    }
}
