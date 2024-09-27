using StackApp.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StackApp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var numbers = new int[] { 1, 2, 3 };
            var stack_numbers = new LinkedListStack<int>();//hangi tipe göre çalışıyorsa onun ifadesi <int> şeklinde belirlenir , tip güvenliği sağlanır
            foreach (var number in numbers)
            {
                stack_numbers.Push(number);
        }

        }
    }












    


}
