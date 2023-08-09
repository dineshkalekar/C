#include<stdio.h>
int main()
{
	int x = 10;
	int* p;// pointer variable
	printf("Eneter the value of x is %d",x);
    printf("\nEnter the Address of x is %d",&x);
	p = &x;
	printf("\nEnter the value of p is %d",p);
	printf("\n Deref - *p is %d", *p);
    printf("\nEnter the Address of p is %d",&p);

	return 0;
}