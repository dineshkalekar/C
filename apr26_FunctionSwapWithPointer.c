#include<stdio.h>
int swap(int* p1, int* p2);// decleration
int swap(int* p1, int* p2)  // defination
{
	int temp;
	temp = *p1;
	* p1 = *p2;
	*p2 = temp;
}  
void main()
{
	int x = 100, y = 200;
	printf("Before swap x=%d and y=%d",x,y);
	swap (& x, & y);
	printf("\nAfter swap x=%d and y=%d", x, y);

	return ;

}