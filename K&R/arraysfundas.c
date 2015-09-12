swap (&a, &b)
//&a is the pointer to a
// &b is the pointer to b

//declare parameters as pointers in swap itself
void swap (int *px, int *py) { /* interchange *px and *py */

	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}


//the loop fills an array with integers by calls to getint()

int n, array[SIZE], getint(int *);

for (n=0; n < SIZE && getint(&array[n]) != EOF; n++)
;

//you have to pass the address of array (&array[n]), otherwise
//theres not way for getint to communicate the converted integer back to the caller

#include <ctype.h>

int getch(void);

void ungetch(int);

/* getint: get next integer from input into *pn */

int getint(int *pn) {
	
	int c, sign;

	while (isspace(c = getch())) /* skip the white space, ; do nothing */
		;

	if (!isdigit(c) && c != EOF && c != '+' && c != '-') }

		ungetch(c); /* its not a number then, !isdigit */
		return 0;
	}

	sign = (c == '-') ? -1 : 1;

	if (c == '+' || c == '-')
	c = getch();

	for (*pn = 0; isdigit(c), c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;

	if (c != EOF)
		ungetch(c);
	return c;

}

int a[10];

declares an array of size 10 -- a block of 10 consecutive objects named a[0]. a[1]. a[2]. a[3]. a[4]. a[5]

etc

a[i] refers to the i-th element of the array

if pa is a pointer to an integer, declared as:

	int *pa;

then the assignment

pa = &a[0]

sets pa to point to element zero of a,

pa contains the address of a[0]

now

x = *pa;

copies the contents of a[0] into x

if pa points to an element of an array, then pa+1 will point to the next element

pa + i points to i elements after pa (in this case a[0])

*(pa+1) = a[1]

this is what is meant by "adding 1 to a pointer"

after pa = &a[0]

pa and a have identical values, because a is the same as the initial element location, a[0]

pa = a 

is the same as 

pa = &a[0]

referencing a[i] can be written as *(a+i)


/* strlen: return length of string s */

int strlen(char *s)
{

	int n;

	for (n = 0; *s != '\0', s++)
		n++;

	return n
}

incrementing *s has no effect on character string in function that called strlen, it just increments strlens
private copy of the pointer

which means

strlen("hello world") /* string constant */

strlen(array); /* char array[100] */

strlen(ptr) /* char *ptr */

as formal parameters in a function DEFINITION

char s[] and

char *s

are equivalent

char *s is more explicit about it being a variable pointer

a piece of an array can be passed ot a function

f(&a[2])

f(a+2)

f is passed element 2 of array a in either case

alloc(n) and afree(n) allocate and free up storage for n consecutive character positions

stack = last-in, first-out

