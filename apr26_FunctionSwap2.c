#include<stdio.h>
void main()
{
	int x = 100, y = 200; 
	printf("Before Swap X=%d and Y=%d", x, y);

	x = x + y;
	y = x - y;
	x = x - y;
	printf("\n After Swap X=%d and Y=%d", x, y);

	return 0;

}
