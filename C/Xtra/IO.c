#include <stdio.h>

int main()
{
	int c;

	c = getchar();

	while (c != EOF) {
		if (c == 123) {
			break;
		}
		else {
		putchar(c);
		c = getchar();
		}
	}
	return 0;


}