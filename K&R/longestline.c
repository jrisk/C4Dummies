#include <stdio.h>
#define MAXLINE 1000

/* print the longest line the file */

int getline(char line[], int maxline);
void copy(char from[], char to[]);

main() {
	
	int len; // current line length

	int max; // maximum line length seen thus far

	char line[MAXLINE]; // current input line

	char longest[MAXLINE]; // longest line saved in here

	max = 0;

	while ((len = getline(line, MAXLINE)) > 0) {

		if (len > max) {
			max = len;
			copy(longest, line);
		}

	if (max > 0) { // there was a line

		printf("%s", longest);
		}

	}

}

/* getline function, read a line into s, return length */

int getline(char s[], int lim) {

	int c, i;

	for (i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {

		s[i] = c;

	if (c == '\n') {

		s[i] = c;
		i++;    

		}

	}

	s[i] = '\0';

	return i;
}

/* copy 'from' into 'to', assuming its big enough */

void copy(char to[], char from[]) {

	int i;

	i = 0;

	while ((to[i] = from[i]) != '\0') {
		i++;
	}

}
