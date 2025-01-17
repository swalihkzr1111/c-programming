/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int mynum[2][3];
    
    printf("enter a number");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&mynum[i][j]);
        }
        printf("\n");
    }
        for(int i=0;i<2;i++){
            for (int j=0;j<3;j++){
                printf("%d ",mynum[i][j]);
            }
            printf("\n");
        }
        
    

    return 0;
}