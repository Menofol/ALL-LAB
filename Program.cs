using System;

namespace TestOne
{
    public class Program
    {
        static public int getProduct(int n)
        {
            int product = 1;

            while (n != 0)
            {
                product = product * (n % 10);
                n = n / 10;
            }
            return product;
        }
        static public int getSum(int n)
        {
            int sum = 0;

            while (n != 0)
            {
                sum = sum + (n % 10);
                n = n / 10;
            }
            return sum;
        }

        static void Main(string[] args)
        {
                point:
                Console.WriteLine("Enter number for 1000 to 9999: ");
                string S1 = Console.ReadLine();
                int n = int.Parse(S1);
                if ( n < 1000 || n > 9999)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("\tErrs input! Enter for 1000 to 9999...\n");
                    Console.ResetColor();
                    goto point;
                }
                else
                {
                    Console.WriteLine("\tProduct: " + getProduct(n));
                    Console.WriteLine("\tSum: " + getSum(n));
                };
        }
    }
}


