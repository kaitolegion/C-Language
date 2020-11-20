#include <stdio.h>

int main()
{
   int n = 1,s=7, result = 1;

   do
   {
       printf("%d ", result);
       
       
       n = n + 1;
       result *= n;
      
       
   }while( n <= s );

   return 0;
}
