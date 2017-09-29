//buddy pair number - sum of all factors of one number(first) is equal to another number and sum of all factors of that number is equal to first number..

import java.lang.*;
import java.util.Scanner;

class Factors
{
   public static int getSumOfFactor(int x)
   {
	   int sum=0;
      for (int i=1;i<=x/2;i++)
      {
         if(x%i==0)

           {
			   sum += i;
			   System.out.println("sum of fectors of"+x+" for "+i+" is"+sum);
		   }
      }
      System.out.println("sum of fectors of"+x+" is"+sum);
      return sum;
   }
}

class BuddyPairNumbers
{
   public static void main(String args[])
   {
	   int n;
	   Scanner s = new Scanner(System.in);
	   System.out.println("enter the number where upto you want to check buddy pair number  ");
       n=s.nextInt();
       Factors f = new Factors();
       int x;
       int i=1;
       while(i<=n)
       {

		 x=f.getSumOfFactor(i);
		// System.out.println("sum of fectors of  "+x);
		 int y;
         int j=i;
         while(j<=n)
            {
		      if(x==j && i!=j)
		        {
		          y=f.getSumOfFactor(j);
		      	 //System.out.println("enter  number n "+y);

			        if(x==j && y==i)

					  {
						  System.out.println("sum of fectors of  "+x);
						  System.out.println("sum of fectors of  "+y);
					    System.out.println("numbers are in buddy pair " +i+ "  and  " +j );

					      break;

					  }

		         }
               j++;
	        }
          i++;
	    }

    }
}