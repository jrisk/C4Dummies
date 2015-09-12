/*Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab
into visible escape sequences like \n and \t as it copies the string t to s . Use a switch . Write
a function for the other direction as well, converting escape sequences into the real characters.*/

#include <stdio.h>

#define MAXLINE 1000

int getaline(char s[], int limit);

void escape(char s[], char t[]);

main() {

	char mainstring[MAXLINE];

	char tstring[MAXLINE];

	getaline(tstring, MAXLINE);

	escape(mainstring, tstring);

	printf("%s", mainstring);

	return 0;

}

int getaline(char string[], int lim) {

	int i, c;

	for (i = 0; i <= lim - 1 && ((c = getchar()) != EOF); ++i) 
		string[i] = c;
	
	string[i] = '\0';
}

void escape(char s[], char t[]) {

	int i, j;

	i = j = 0;

	while (t[i] != '\0') {
	
	switch (t[i]) {
		case ('\n'):
			s[j] = '\\';
			j++;
			s[j] = 'n';
			break;
		case ('\t'):
			s[j] = '\\';
			j++;
			s[j] = 't';
			break;
		default:
		s[j] = t[i];
		break;
	}

	i++;
	j++;

}

s[j] = '\0';

}


