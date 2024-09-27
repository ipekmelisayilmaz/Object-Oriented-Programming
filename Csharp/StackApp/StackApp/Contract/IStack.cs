using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StackApp.Contract
{
    //Arayüzler kuralları koyar, detaylarla ilgilenmez , alt sınıflar detayları organize eder
    public interface IStack<T>
    {
        void Push(T item);
        T Pop();
        T Peek();
    }
}
