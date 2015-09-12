#include <stdio.h>

main() {
	
	int *ptr;

	char *ptrarr = "ptrarr string";

	int a = 4;

	char arr[] = "hello array";

	ptr = &a;

	printf("the memory location ptr is pointed at is: %p\n the value of *ptr points at is: %d\n", ptr, *ptr);

	printf("the memory location ptrarr is pointed at is: none\n the value that *ptrarr points at is: %s\n", ptrarr);
}