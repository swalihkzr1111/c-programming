/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int binary_search(int array[], int size, int num) {
	int low = 0, high = size - 1;

	while (low <= high) {
		int mid = low + (high - low) / 2;

		if (array[mid] == num)
			return mid;
		else if (array[mid] < num)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return -1;
}

int main() {
	int array[] = {10,11,12,13,14,15,16,17,18};
	int size = sizeof(array) / sizeof(array[0]);
	int num = 15;
	int result = binary_search(array, size, num);

	if (result != -1)
		printf("your element %d found and its index is : %d\n", num, result);
	else
		printf("your element %d not found in array.\n", num);

	return 0;
}