#include <stdio.h>
#define MAXLINE 1000

/*Revise the main routine of the longest-line program so it will correctly print
the length of arbitrary long input lines, and as much as possible of the text.*/

int getaline(char anothaline[], int aline);
void copy(char from[], char to[]);

main() {
	
	int len; // current line length

	int max; // maximum line length seen thus far

	char line[MAXLINE]; // current input line

	char longest[MAXLINE]; // longest line saved in here

	max = 0;

	while ((len = getaline(line, MAXLINE)) > 0) {

		if (len > 80) {
			max = len;
			copy(longest, line);
			printf("%s\n", longest);
			printf("%d\n", len);
		}

	}

}

/* getline function, read a line into s, return length */

int getaline(char s[], int lim) {

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
