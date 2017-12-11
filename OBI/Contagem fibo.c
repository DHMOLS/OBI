#include <stdio.h>
int n1 = 1, n2 = 1, n, fib;
int main(void)
{

   while (n > 0)
   {
      n = n + 1;
      
      if(n <= 2) 
      {
         printf("%d", n);
      }
      else 
      {
         for (int i=3; i<=n; i++)
         {
            fib = n1+n2;
            n1=n2;
            n2=fib;
         }
         printf("%d\n", fib);
         printf("%d\n", n);
      }
   }
   
      
   return 0;
}