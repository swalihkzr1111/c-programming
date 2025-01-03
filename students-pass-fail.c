/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   int mark,result;
    printf("enter yor mark");
    scanf("%d",&mark);
    if(mark<50){
        printf("the result is failed");
    }
   else{
       printf("the result is pass");
   }
    return 0;
}