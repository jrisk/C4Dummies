/* strlen: return the length of string s */

int strlen(char *s) {
	
	char *p = s; /* declares pointer p and initialized to first character of the string s */

	while (*p != '\0') { /* each character examined until reaches end of array, always null '/0' */
	p++;
	}

	return p - s


}

/*could use ptrdiff_t which is large enough to hold signed difference of 2 pointer values */
/*safer to use size_t for return value of strlen */
/* size_t is the unsigned integer type returned by sizeof operator */

/* all pointer manipulations automatically take into account the size of the object being pointed to */

/* you cant assign a pointer of one type to a pointer of another type without a cast (int) (float) etc */