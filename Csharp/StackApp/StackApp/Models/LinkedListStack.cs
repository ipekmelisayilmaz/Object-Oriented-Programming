using StackApp.Contract;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StackApp.Models
{
    public class LinkedListStack<T> : IStack<T>
    where T : IComparable
    {
        public T Peek()
        {
            throw new NotImplementedException();
        }

        public T Pop()
        {
            throw new NotImplementedException();
        }

        public void Push(T item)
        {
            throw new NotImplementedException();
        }
    }
    
      /*  private LinkedList<T> _collection;//Bu liste herhangi bir türde (object türünde) nesneleri tutabilen bir bağlantılı listedir
                                          //Bu ifadenin başlatılması gerekir, kurucu metot içerisinde bu işlem gerçekleştirilebilir
    public LinkedListStack()
        {
            _collection = new LinkedList<T>();//bir örneği oluşturuldu
        }
        public T Peek()
        {
            return _collection.First.Value;
        }

    public T Pop
    {
        get
        {
            var temp = _collection.First.Value;
            _collection.RemoveFirst();//void bir fonk oldugundan değer döndürmez.
            return temp;                        //silinen elemanı geri döndürmek için farklı bir değişkende tutulmalı

        }
    }

    public void Push(T item)
        {
            _collection.AddFirst(item);//AddFirst fonksiyonu, LinkedList<T> sınıfında kullanılan bir metottur.
                                       //Bu metot, bir bağlantılı listenin başına yeni bir öğe eklemek için kullanılır
        }*/

}

