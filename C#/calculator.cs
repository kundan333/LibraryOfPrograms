using System;
public class calculator
{
    public static int Sum(int num1, int num2)
    {
        int total;
        total = num1 + num2;
        return total;
    }

    public static int Dif(int num1, int num2)
    {
        int total;
        total = num1 - num2;
        return total;
    }

    public static int Prod(int num1, int num2)
    {
        int total;
        total = num1 * num2;
        return total;
    }

    public static int Div(int num1, int num2)
    {
        int total;
        total = num1 + num2;
        return total;
    }
     
    public static void Main()
    {
    while(true)
{
	  	Console.Write("\n\n--------SIMPLE CALCULATOR---------\n");
      		Console.Write("--------------------------------------------------\n");
	 	Console.Write("Enter a number: ");
      		int n1= Convert.ToInt32(Console.ReadLine());
      		Console.Write("Enter another number: ");
      		int n2= Convert.ToInt32(Console.ReadLine());
 Console.Write("Select operation number: \n 1: SUM \n 2: DIF\n 3: PROD\n    4: DIV\n 0:EXIT");
      		int option= Convert.ToInt32(Console.ReadLine());
      		switch(option)
 {
       	case 1  :
      		Console.WriteLine("\nThe Sum of two numbers is : {0} \n", Sum(n1,n2) );
        	continue; /* optional */
       	case 2  :
 Console.WriteLine("\nThe Difference of two numbers is : {0} \n", Dif(n1,n2) );
       	 continue; /* optional */
       	 case 3  : 
Console.WriteLine("\nThe Product of two numbers is : {0} \n", Prod(n1,n2) );
       	 continue; /* optional */
        	case 4  :
 Console.WriteLine("\nThe Quotient of two numbers is : {0} \n", Div(n1,n2) );
        continue; 
        default : /* Optional */
        Environment.Exit(0);
        break;
        
      }
      }
      
    }
}
