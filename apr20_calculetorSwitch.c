#include<stdio.h>
int main() {
	int a, b, ch, res;
	float ans;
	printf("Akash Date and month of a\n");
	printf("Akash Year of b\n\n");
	scanf_s("%d%d", &a, &b);

	printf("1.Sum\n2.Substracation\n3.Multification\n4.Division\n\n");
	printf("Select any one Operation \n");
	scanf_s("%d", &ch);
	switch (ch)
	{
	case 1:res = a + b;
		printf("Sum = %d\n", res);
		//break;
	case 2:res = a - b;
		printf("Substracation = %d\n", res);
		//break;
	case 3:res = a * b;
		printf("Multification = %d\n", res);
		//break;
	case 4:ans = (float) a / b;
		printf("Division = %f\n", ans);
		//break;

	default:printf("\n...<Date Of Birth Akash Bidkar>...\n\n");
		break;
	} printf("...Thank You..\n\n");
	return 0;
}