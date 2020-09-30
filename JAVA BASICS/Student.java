import java.io.*;


class Details
  {
   public static String name = "ayush";
   public static double pocket; 
  }

 class Marks
  {
   int eng;
   int maths;
   int phys;
  }

public class Student
{
 public void StudentAge()
  {
    int age = 0;
    age = age + 20;
    System.out.println("Student age" + age);
  }

 public static void main(String[] args)
 {
   Details.pocket = 1000;
   System.out.println(Details.name + " pocket money " + Details.pocket);
   
   Student s1 = new Student();
   s1.StudentAge();

   Marks obj = new Marks();
   obj.eng = 78;
   obj.maths = 60;
   obj.phys = 90;

   System.out.println("MARKS are:");
   System.out.println(obj.eng);
   System.out.println(obj.maths);
   System.out.println(obj.phys);

 }

} 