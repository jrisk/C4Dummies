#include <stdio.h>

int main() {
	
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
		printf("%d", EOF);
		printf("\nthe value of the expression is %d", getchar() != EOF);

	}
}