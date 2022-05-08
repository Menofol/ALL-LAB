using System;
namespace Umi
{
    public class Program
    {
        public static string Testmonth(String month)
        {
            // from the month return seasons with stiwch case with color 
            switch (month)
            {
                case "1":
                case "2":
                case "3":
                    return "Winter\n";
                case "4":
                case "5":
                case "6":
                    return "Spring\n";
                case "7":
                case "8":
                case "9":
                    return "Summer\n";
                case "10":
                case "11":
                case "12":
                    return "Autumn\n";
                default:
                    return "Month must be from 1 to 12...";
            }
        }
        // main method
        public static void Main(string[] args)
        {
            // loop until user enters a valid month and exit if user enters "exit" or "quit"
            while (true)
            {
                Console.Write("Enter a month number: ");
                string month = Console.ReadLine();
                if (month == "exit" || month == "quit")
                {
                    break;
                }
                Console.Write(Testmonth(month));
            }
        }
    }
}
