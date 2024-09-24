/*Java'da bir sınıf doğrudan static olarak tanımlanamaz. 
Ancak bir sınıfın içinde başka bir sınıf tanımlarsanız nested class (yani bir iç sınıf), bu iç sınıf static olarak işaretlenebilir. */

public class MathHelper {//yalnızca classın başına static yazarak kullanılamaz üyeler static tanılmanacak
    public static int add(int a , int b)
    {
        return a+b;
    }

    public static int subtract(int a , int b)
    {
        return a-b;
    }

    public static int multipy(int a , int b)
    {
        return a*b;
    }
    public static int divide(int a, int b)
    {
        if(b==0)
        {
         throw new ArithmeticException("Division by zero is not allowed");
        }
        return a/b;

    }
}
