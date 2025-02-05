/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int n,array[50];
int bub_sort(int array[50]) {

    printf("enter the number of elements : ");
	scanf("%d",&n);
	printf("enter your elements : ");
	for(int i=0; i<n; i++) {
	scanf("%d",&array[i]);
	}
      for(int i=0; i<=n-1; i++) {
		for(int j=0; j<n-i-1; j++) {
			if(array[j]>array[j+1]) {
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;


			}
		}
	}
}
  
  int main(){
	
		bub_sort(array);
		printf("ascending order of elements is :\n ");
		for(int i=0; i<n; i++) {
			printf("%d \n",array[i]);

		}
	



	return 0;

}
	
	

	
	