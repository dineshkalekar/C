#include<stdio.h>
int main10()
{
	int a[5] = { 10,20,30,40,50 };
	int* p1 = &a[0];
	int* p2 = &a[3];
	int res;

	printf("\n Value of p1=%d and p2=%d", *p1, *p2);
	p1++;
	printf("\np1++ Addrs of p1=%d and value of p1 = %d", p1, *p1);
	p2--;
	printf("\np2-- Addrs of p2= %d and value of p2=%d", p2, *p2);
	p1 =p1+ 2;
	printf("\np1+2 Addrs of p1=%d and value of p1 = %d", p1, *p1);
	p2= p2-2;
	printf("\np2-2 Addrs of p2= %d and value of p2=%d", p2, *p2);
	res = *p1 + *p2;
	printf("\n Result is %d", res);
	return 0;
}