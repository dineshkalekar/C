#include<stdio.h>
int SumNatual();
int SumNatual()
{
	int s = 0, n = 10;
	if (n == 1)
		return 1;
	else
		s = n + sum(n - 1);
	return s;
}
int main()
{
	int n = 10, res;

	res = SumNatual(n);
	printf("Sum of 1st 10 Natural No :\n", res);
	return 0;
}
