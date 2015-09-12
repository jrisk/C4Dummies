#include <stdio.h>

#define MAXLINE 1000

/* Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines. */

int workline(char string[]);

main() {

	int len; // line length

	int i; //for loop variable

	int c; // getchar variable holder

	char line[MAXLINE]; // line holder array

	while (len = workline(line) >= 0) {

	printf("%s", line);

	if (len = 0) {
		printf("%d lines, but why?", len);
		}

	}
}

int workline(char s[]) {

	int i, c;

	for (i = 0; i < MAXLINE && (c = getchar()) != EOF && c != '\n' && c != '\t' && c != ' '; i++) {
		s[i] = c;

		if (c == '\n') {
			s[i] = c;
			i++;
		}
	}

	s[i] = '\0';

	return i;

}