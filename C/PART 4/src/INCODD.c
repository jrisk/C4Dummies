/* incrementers like a++ only increment after the variable has been read
as opposed to ++a */

#include <stdio.h>

int main()
{
	int a, b, c, d;
	
	a=10;
	b=0;
	printf("a=%d and b=%d before incrementation\n", a, b);
	b=a++;
	printf("a=%d and b=%d after incrementation\n", a, b);
	puts("b gets the value of a put in in first, then a is incremented and read fully");
	puts("\n same thing works for decrementing too \n");
	
	c=10;
	d=0;
	
	printf("c=%d and d=%d before decrementation\n", c, d);
	d=c--;
	printf("c=%d and d=%d after decrementation\n", c, d);
	
	return(0);
}