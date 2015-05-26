/* now we use ++a and --a to show that putting the inc and decrementer before the variable makes it do
that inc or decrementation before the varaible is read */
#include <stdio.h>

int main()
{
	int a, b, c, d;
	
	a=10;
	b=0;
	printf("a=%d and b=%d before incrementation\n", a, b);
	b=++a;
	printf("a=%d and b=%d after incrementation\n", a, b);
	puts("b gets the value of the incremented a first, since the incrementer is read first");
	puts("\n same thing works for decrementing too \n");
	
	c=10;
	d=0;
	
	printf("c=%d and d=%d before decrementation\n", c, d);
	d=--d;
	printf("c=%d and d=%d after decrementation\n", c, d);
	
	return(0);
}