/*Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2 . Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z . Arrange that a leading or trailing - is taken literally.*/

#include <stdio.h>

#define MAX 1000

int expand(char to[], char from[]);

main() {
	
	char from[] = "a-c";

	char getback[MAX];

	char from2[] = "something like a-z or 0-9";

	expand(getback, from2);

	printf("%s", getback);

}

int expand(char t[], char f[]) {

	 char alphabet[] = "abcdefghijklmnopqrstuvqxyz";

	int i, j, k, c, a;

	k = 0;

	for (i = 0, a = 0; i < MAX && f[i] != '\0'; i++, a++) {

		if (f[i] == 'a' && f[i + 1] == '-' && f[i + 2] == 'z') {
			for (j = 0, k = i; j <= 25; j++, k++) {
				t[k] = alphabet[j];
				printf("%c\n", t[k]);
				}
			a = k;
		}

	t[a] = f[i];
	printf("%c\n", t[i]);
	}

	t[a] = '\0';

return 1;

}