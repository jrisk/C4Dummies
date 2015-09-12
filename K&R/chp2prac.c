#include <stdio.h>
#include <string.h>

#define NUMBAH 100

main() {
		
	char dastring[] = "hello friend";

	int length = strlen(dastring);

	int c, i;

	printf("%s\n", dastring);

	printf("%d\n", length);

	while ((c = getchar()) != EOF) {
		putchar(c);
	}

}