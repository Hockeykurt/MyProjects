using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace SvgGenerator
{
    class FileCreator
    {
        public void Create(string path, string contents)
        {
            try
            {
                File.WriteAllText(path, contents);
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Exception while writing file - {path}");
                Console.WriteLine($"Message       : {ex.Message}");
                Console.WriteLine($"Inner Message : {ex.InnerException?.Message}");
                Console.WriteLine(ex.StackTrace);
            }
        }
    }
}
