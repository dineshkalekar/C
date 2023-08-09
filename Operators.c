#include <stdio.h>
int main6() {
	/* Relational operators */
	printf("%d\n", 4 == 3);
	printf("%d\n", 4 >= 3);
	printf("%d\n", 4 != 3);

	/* Logical Operators */
	printf("%d\n", 4 > 3 && 5 > 2);   /* output is true 1 */
	printf("%d\n", 3 > 4 && 5 > 4);   /* output is false 0 */
	printf("%d\n", 3 > 4 || 5 > 2);   /* output is true 1 */
	printf("%d\n", !(4 > 3) && (3 > 1)); /* output is false 0 */ 

	return 0;

}