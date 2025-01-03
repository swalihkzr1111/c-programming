/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
      int mark;
    printf("enter your mark : ");
    scanf("%d",&mark);
    int m =0;
    
    if(mark>=90&&mark<100){
        m =1;
    }
    else if(mark>=80&&mark<90){
        m =2;
        
    }
    else if(mark>=70&&mark<80){
        m=3;
    
    }
    else if(mark>=60&&mark<70){
      m=4;
    }
    else if(mark>=50&&mark<60){
        m=5;
    }
    
      switch(m){
        case 1:
        printf("your grade is A");
        break;
        case 2:
        printf("your grade is B");
        break;
        case 3:
        printf("your grade is C");
        break;
        case 4:
        printf("your grade is D");
        break;
        case 5:
        printf("your grade is E");
        break;
        default:
        printf("you are failed");
        
        
    }

    

    return 0;
}
