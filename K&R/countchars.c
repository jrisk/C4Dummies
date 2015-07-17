#include <stdio.h>

main() {
	int c, n1, n2, n3;

	n1,n2,n3 = 0;

	while ((c = getchar()) != EOF)
	if (c == '\n') 
		n1++;
	if (c == '\t') 
	n2++;
	if (c == ' ') 
	n3++;
	printf("Number of lines: %d\n", n1);
	printf("Number of tabs: %d\n", n2);
	printf("Number of spaces: %d\n", n3);
}