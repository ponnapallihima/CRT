/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     char name[30];
    puts("Enter your name");
   // gets(name);
   scanf("%[^\n]s",&name);
    puts("your name is");
    puts(name);
    return 0;
    
    
}
