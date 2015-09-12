#include <stdio.h>

#define MINLINE 81

#define MAXLINE 1000

/* write a program that prints all input lines that are longer than 80 characters */

int getline(char s[], int maxline);
void copy(char to[], char from[]);

main() {
	
	int len; // current line length

	char saver[MAXLINE]; // saves and outputs any string array thats more than 80 characters

	int min = MINLINE;

	int max;

	char line[MAXLINE];

	char longest[MAXLINE];

	max = 0;

	while ((len = getline(line, MINLINE)) > 0) {

			if (len > max) {
			max = len;
			copy(longest, line);

		}
		
		if (max > 0) {// theres a line
			printf("%s", longest)

		}

		if (max > 80) { // theres a line longer than 80
			printf("%s", line)
		}

	}

}

int getline(char s[], int line) {
	
	int i, c;

	for (i = 0; i < MAXLINE && (c = getchar()) != EOF) && i < (line - 1)); i++) {

		s[i] = c;
	}

	if (c == '\n') {
		s[i] = c;
		i++;
	}

		s[i] = '\0';

	return i;

}

copy(char to[], char from[]) {

	int i;

	i = 0;
	
	while ((char to[i] = char from[i]) != '\0') {
		i++;
	}

}