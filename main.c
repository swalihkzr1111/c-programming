/******************************************************************************

1) Write a program to find the simple interest.
The program should accept 3 inputs from the user and calculate simple interest for the given inputs. Formula: SI=(PRn)/100)
*******************************************************************************/
#include <stdio.h>

int main()
{   int p;
    float r,n,si;
    printf("enter your principle amount : ");
    scanf("%d",&p);
    printf("enter rate of interest : ");
    scanf("%f",&r);
    printf("enter your number of years : ");
    scanf("%f",&n);
    
    si = (p*r*n)/100;
    printf("%f",si);
    
    

    return 0;
}
