using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Collections;

namespace BookStore
{
    public class Category
    {
        public int CategoryId
        {
            get => default;
            set
            {
            }
        }

        public string CategoryName
        {
            get => default;
            set
            {
            }
        }

        public ICollection<Book> Books
        {
            get => default;
            set
            {
            }
        }
    }
}