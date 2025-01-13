/******************************************************************************

Welcome to GDB Online.
  right half pyramid.
*******************************************************************************/
#include <stdio.h>

int main()
{   int i,a;
    for(i=0;i<5;i++){
        for(a=0;a<=i;a++){
            printf(" * ");
        }
        
        printf("\n");
    }

    return 0;
}