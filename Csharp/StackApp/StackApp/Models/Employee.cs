using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StackApp.Models
{
    public class Employee
    {
        public Employee(string firstName, string lastName, decimal salary)
        {
            FirstName = firstName;
            LastName = lastName;
            Salary = salary;
        }

        public String FirstName { get; set; } = string.Empty;//.NET Sınıf Üyelerine Erişimde String**: String
        public String LastName { get; set; }
        public Decimal Salary { get; set; } = 0;
        public String  FullName {
            get // yalnızca okuma yapılması 
            {
                return FirstName + " " + LastName;
            }
        }//veya lamda fonksiyonu ile  public String  FullName => FirstName + " " + LastName;

        public override string ToString()//ToString() metodunu geçersiz kılarak (override ederek) özelleştirilmiş bir string temsili sağlamaktadır
        {
            return string.Concat(FullName," " ,Salary);//Concat verilen tüm string parametrelerini birleştirir ve tek bir string döndürür. 
        }
    }
}
