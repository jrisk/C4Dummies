#include <stdio.h>

main() {
	
	int i;
	int n = '0';
	char c[10];

	for (i=0; i < 10; ++i) {
		c[i-'0']= i, c[i] - '0';
		printf("%i\n", c[i]);
		printf("%d\n", c[i]);
		printf("%s\n", c[i]);
		printf("%c\n", c[i]);
		printf("%p\n", c);
	}

	printf("%d, %i, %c\n, %s", n, n, n, *c);

}