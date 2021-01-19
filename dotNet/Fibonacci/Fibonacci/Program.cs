using System;

namespace Fibonacci
{
    class Program
    {
        public static int FibonacciFinder(int num)
        {
            int result = 0;
            if (num == 0) return 0;
            else if (num == 1) return 1;
            else
            {
                int a = FibonacciFinder(num - 1);
                int b = FibonacciFinder(num - 2);
                result = a + b;
            }
            return result;
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Type a number to find its fibonacci:  ");
            int x;
            if (int.TryParse(Console.ReadLine(), out x))
            {
                Console.WriteLine("The fibonacci of " + x + " is " + FibonacciFinder(x));
            }
            else
            {
                Console.WriteLine("Wrong input entered.A string was supplied while number was needed to complete operation");
            }
            //Console.ReadLine();
        }
    }
}
