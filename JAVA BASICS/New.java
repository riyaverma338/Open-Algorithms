
import java.lang.*;

public class New 
{
  public static void main(String[] args)
  {
    StringBuffer take = new StringBuffer("ayush");

    System.out.println("string buffer = " + take);

     take.appendCodePoint(121);

    System.out.println(" after appending =" + take);
  }
}