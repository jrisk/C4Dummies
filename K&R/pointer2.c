#include <stdio.h>

main() {

	int x = 1, y = 2, z[10];

	int *ip; /* ip is a pointer to int */

	ip = &x; /* ip now points to x ... ip = 1*/

	y = *ip; /* y is now 1 */

	*ip = 0; /* x is now 0 */

	ip = &z[1] /* ip now points to z array position 1 in memory */

}

