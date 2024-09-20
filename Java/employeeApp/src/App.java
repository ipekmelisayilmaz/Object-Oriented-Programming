import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class App {
    public static void main(String[] args) throws Exception {
    
         List<Integer> numbers = Arrays.asList(60,90,80,70,40) ;
         writeList(numbers);
       
  
      Collections.sort(numbers);
      System.out.println("-----"  );
      writeList(numbers);
    }

    private static void writeList(List<Integer> collection)
    {
    for (Integer item : collection) {
        System.out.println(item);
       }
    }
}

