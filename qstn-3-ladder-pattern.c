/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,j,k,n;
    
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=1;j++){
            printf("* \n");
        }
        
        for(k=1;k<=i*n;k++){
             printf("* ");
          if(k % 3==0){
              printf("\n");
          } 
          
        }         
    
    }
    return 0;
}
