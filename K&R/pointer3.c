#include <stdio.h>

void swap(int *px, int *py) /* interchange because pass by value doesnt allow direct change of variable from one funtion to another */
swap(&a, &b);

swap(int *px, int *py) {
	
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}