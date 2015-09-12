#include <stdio.h>

#define MAXLINE 10000

/* write a program that reverse a string */

int getaline(char s[], int lim);

void reverseit(char str[]);

main() {
	
	char string[MAXLINE];

	int len, c, i;

	while ((len = getaline(string, MAXLINE)) != 0) {

		if (len > 1) {

		reverseit(string);

		printf("%s", string);

	}
	}

return 0;

}

int getaline(char hello[], int world) {

	int i, c;

	for (i = 0; i < (world - 1) && (c = getchar()) != EOF && c != '\n'; i++) {

	hello[i] = c;

		if (c == '\n') {
			hello[i] = c;
			i++;
		}
	}

	hello[i] = '\0';

	return i;

}

void reverseit(char s[]) {

	int i, j;

    char temp;

    for (j = 0; s[j] != '\0'; ++j)
    	;

    --j;

    if (s[j] == '\n') {
        s[j] = '\0';
        --j;
    }

    for (i = 0; i < j; i++) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        --j;
    }
}