#include<stdio.h>
int Factorial(int n);
int Factorial(int n)
{
	int fact = 1;
	if (n == 1)
		return 1;
	else
		fact = n * Factorial(n - 1);
	return fact;
}
int main()
{
	int n;
	int res;
	printf(" Enter A Number :");
	scanf_s("%d",&n);

	res = Factorial(n);
		printf("Factorial is %d", res);

		return 0;
}