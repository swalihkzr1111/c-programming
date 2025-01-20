/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int num,expn,c,sum;
    printf("enter a number");
    scanf("%d",&num);
    while(num>0){
        c=num%10;
        sum=sum+c*pow(2,expn);
        expn++;
        num/=10;
        
    } printf("%d",sum);    
        
    
}
    
    
    
    

