#include<stdio.h>
int main()
{
	int x = 100, y = 200, temp;
	printf("Before Swap x=%d and y=%d", x, y);
	temp = x;
	x =  y;
	y = temp;
	printf("\nAfter Swap x=%d and y=%d", x, y);
  
		
	return 0;

}
