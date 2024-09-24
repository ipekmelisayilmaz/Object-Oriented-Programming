using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StackApp.Contract
{
    //Arayüzler kuralları koyar, detaylarla ilgilenmez , alt sınıflar detayları organize eder
    public interface IStack
    {
        void Push(Object item);
        Object Pop();
        Object Peek();
    }
}
