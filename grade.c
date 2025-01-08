/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	float w,l,a,grade;
	printf("enter your written exam mark");
	scanf("%f",&w);
	printf("enter your lab exam mark");
	scanf("%f",&l);
	printf("enter your assignment mark");
	scanf("%f",&a);

	grade = (w*70)/100+(l*20)/100+(a*10)/100;
		printf("overall grade is %f",grade);
		
	

	
}