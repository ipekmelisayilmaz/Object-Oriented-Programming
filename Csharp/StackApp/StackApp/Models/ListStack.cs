using StackApp.Contract;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StackApp.Models
{
    public class ListStack<T> : IStack<T>
    where T : IComparable
    {
        private List<T> _collection; //private değişken tanımı sebebiyle _ eklendi
        private int _lastIndex => _collection.Count - 1;
        public ListStack()
        {
            _collection = new List<T>();
        }

        public T Peek()
        {
            return _collection[_lastIndex];
        }

        public T Pop()                     
        {
            var temp = _collection[_lastIndex];
            _collection.RemoveAt(_lastIndex);
            return temp;

        }

        public void Push(T item)
        {
            _collection.Add(item);
        }
    }
}
