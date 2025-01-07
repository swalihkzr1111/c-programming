/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   int i,input,num,output;
    printf("enter a number");
    scanf("%d",&input);
     printf("enter a number for multiply");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        output = (i*num);
        printf("%d * %d = %d \n",i,input, output);
    }
    
    return 0;
}
