/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   int i,num1,num2;
    printf("enter two number");
    scanf("%d%d",&num1,&num2);
    for(i=num1;i<=num2;i++){
        printf("%d\n", i);
    } for(i=num1;i>=num2;i--){
        printf("%d\n",i);
    }
    return 0;
}
