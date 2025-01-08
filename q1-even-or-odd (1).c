/******************************************************************************

Welcome to GDB Online.
  Write a C program to check whether a given number is odd or even
Program should accept an input from the user and display whether the number is odd or even
Eg: Output: Enter a number
Input: 4
Output: Entered number is a odd number
*******************************************************************************/
#include <stdio.h>

int main()
{   int num1;
    printf("enter a number");
    scanf("%d",&num1);
    if(num1%2==0){
        printf("number is even");
    } else {
        printf("number is odd");
    }

    return 0;
}