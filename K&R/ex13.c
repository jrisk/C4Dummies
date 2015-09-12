#include <stdio.h>

/* print a histogram of the lengths of the words in its input etc in a program */

#define MAX_SIZE_WORDS 20

int main() {

	int c, space, counter, i, j;

	int holdarray[MAX_SIZE_WORDS];

	space = 0;

	counter = 0;

	for (i = 0; i < MAX_SIZE_WORDS; i++) {
        holdarray[i] = 0;
       }

	while ((c = getchar()) != EOF) {

		if (c == '\n' || c == ' ' || c == '\t') {
			if (space == 0) {
			holdarray[counter]++;
			counter = 0;
			space = 1;
		}

	}
		else {
			counter++;
			space = 0;
			}

	}

	for (i = 0; i < MAX_SIZE_WORDS; i++) {

		printf("%d : ", i);

		for (j = 0; j < holdarray[i]; j++) {
			printf("*");
		}
	printf("\n");
	}
}