/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{    float ai,it;
     float a,b,c,d;
    
    printf("enter your annual income : ");
    scanf("%f",&ai);
    
    a = 250000;
    b = 500000;
    c = 1000000;
    d = 5000000;
    
    if (ai<=a){
        printf("no tax");
    }  else if (ai>=a && ai<=b){
        it = (ai*5)/100;
        printf("income tax amount = %f",it);
        
    } else if (ai>=b && ai<=c){
        it = (ai*20)/100;
        printf("income tax amount = %f",it);
    } else if (ai>=c && ai<=d){
        it = (ai*30)/100;
        printf("income tax amount + %f",it);
    }
        
        
    
    
        


    return 0;
}
