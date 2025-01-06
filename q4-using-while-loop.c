/******************************************************************************

4) Print natural numbers but the start and end decided by the user eg: input start = 10 , end = 15 output : 10,11,12,13,14,15

*******************************************************************************/
#include <stdio.h>

int main()
{   int num1,num2;
    printf("enter two positive numbers");
    scanf("%d%d",&num1,&num2);
    while(num1<=num2){
        printf("%d\n",num1);
        num1++;
    } while(num1>=num2){
        printf("%d\n",num1);
        num1--;
    }

    return 0;
}
