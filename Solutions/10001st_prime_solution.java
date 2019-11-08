import java.util.*;
public class Main 
{
  public static void main(String[] args)throws Exception
  {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt(); 
    int i,c=0,num=1;
 
    while(c<n)
    {
      num=num+1;
      for (i=2;i<=num;i++)
      {
        if (num%i == 0) 
        {
          break;
        }
      }
      if(i==num)
      {
        c = c+1;
      }
    }
    System.out.println(num);
  }
}
