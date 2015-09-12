//rudimentary storage allocator

#define ALLOCSIZE 10000 /*size of available space */

static char allocbuf(ALLOCSIZE); /* storage for allocbuf */

static char *allocp = allocbuf; /* next free position...points to beggining of allocbuf */

char *alloc(int n) { /* return pointer to n characters */

	if (allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */

		allocp += n;

		return allocp - n /* old p */

	}

	else /* wasnt enough room */
		return 0;

}

void afree(char *p) /* free storage pointed to by p */
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
	allocp = p;
}