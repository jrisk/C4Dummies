/* pointers */

#include <stdio.h>

main() {
	
	int c = 2;

	int x;

	int *p;

	p = &c;

	x = *p;

	printf("int pointer p points to address %p of c\nc is an "
	"integer equal to %d\nand x is an integer set to pointer "
	"p which is set to c and is %d\n", p, c, x);
}