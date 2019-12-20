/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
   int n,i,j;
   scanf("%d",&n);
   if(n>=5 && n<=10)
   {
       for(i=n;i>=1;i--)
       {
           for(j=i;j<=n;j++)
           {
               printf("%d",j);
           }
           printf("\n");
       }
   }
   return 0;
}
