#include<stdio.h>
int main() {
	int a, b, che, res;
	float ans;
	printf("Enter Number a and b");
	scanf_s("%d%d", &a, &b);
	printf("\n\n1.Sum\n2.Substraction\n3.Multiplication\n4.Division\n");
	printf("Select the operation\n");
	scanf_s("%d",&che);

	switch (che)
	{
	case 1: res = a + b;
		printf("Sum is = %d\n",res);
		//break;
	case 2: res = a - b;
		printf("Substraction is = %d\n", res);
		//break;
	case 3: res = a * b;
		printf("Multiplication is = %d\n", res);
		//break;
	case 4: ans = (float) a / b;
		printf("Division is = %f\n", ans);
		//break;

	default:printf(" please Enter correct choice");
		break;
	}
	return 0;

}
