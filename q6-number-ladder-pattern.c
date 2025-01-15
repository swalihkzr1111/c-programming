/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,u=1;
    printf("enetr a number:");
    scanf("%d",&n);
    
    for (int i=1; i<=n; i++) {
        
        for (int j=0; j<=i; j++) {
            printf(" ");
        }
        
        for (int k=1; k<=n+1-i; k++) {
            u=k*i;
            printf("%d ", u);
            
        }
    
        printf("\n");
    }
    
}
