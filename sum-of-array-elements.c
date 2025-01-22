/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mynum[5];
    int output;
    printf("enter 5 numbers");
    for(int i=0;i<5;i++){
        scanf("%d",&mynum[i]);
    }
     for(int i=0;i<5;i++){
         
         output=output+mynum[i];
         
     } printf("sum of the array elements are %d",output);
    
     

    return 0;
}