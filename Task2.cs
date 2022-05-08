using System;

namespace Umi
{
    public class Program
    {
        static void Main(string[] args)
        {
            int k;
            Console.WriteLine("1. With while\n2. With do While\n");
            Console.WriteLine("\tInput:");
            string S1 = Console.ReadLine();
            k = int.Parse(S1);

            switch (k)
            {
                case 1:
                    {
                        float x = (float) -(Math.PI / 2);
                        float max = (float) (3 * Math.PI) / 2;
                        float dx = (float) (Math.PI / 10);
                        while (x <= max)
                        {
                            float y = (float)Math.Pow(x, 2) * (float)Math.Cos(x);
                            if (x == 1)
                            {
                                Console.WriteLine("\n Diviso by = 0 \n");
                            }
                            else
                            {
                                Console.WriteLine("\n x = " + x);
                                Console.WriteLine("function y = " + y);
                            }
                            
                            x += dx;
                        }
                        break;
                        
                    }
                case 2:
                    {
                        float x = (float) -(Math.PI / 2);
                        float max = (float) (3 * Math.PI) / 2;
                        float dx = (float) (Math.PI / 10);
                        do
                        {
                            float y = (float)Math.Pow(x, 2) * (float)Math.Cos(x);
                            if (x == 1)
                            {
                                Console.WriteLine("\n diviso by = 0 \n");
                            }
                            else
                            {
                                Console.WriteLine("\n x = " + x);
                                Console.WriteLine("funcition y = " + y);
                            }

                            x += dx;

                        } while (x <= max);
                        break;
                    }
                default:
                    {
                        Console.WriteLine("\n Wrong input \n");
                        break;
                    }
            }
        }

    }
}
