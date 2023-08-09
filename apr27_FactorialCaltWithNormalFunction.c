#include<stdio.h>
int Factorial(int n);
int Factorial(int n)
{
	int i = 1, fact = 1;
	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
} 
void main()
{
	int n;
	double  res;
	printf(" Enter a no:");
	scanf_s("%d", &n);

	res = Factorial(n);
	printf("\n factorial is %lf\n", res);

	return ;
}
