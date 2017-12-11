#include <stdio.h>
int n1 = 1, n2 = 1, i = 1, n = 0, fib;
int main(void)
{
   while (n >= 0)
   {
      n++;

      if(n <= 2) 
      {
         printf("%d\n", n);
      }
      else 
      {
         for (int i=3; i<=n; i++)
         {
            fib = n1+n2;
            n1=n2;
            n2=fib;
         }
         printf("%d\n", n);
         printf("%d\n", fib);
      }
   }
  
   
      
   return 0;
}
