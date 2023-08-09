#include<stdio.h>
int main() {

	int n, orgNum, rem, cube = 0;

	printf("Enter number\n");
	scanf_s("%d", &n);
	scanf_s("%d", &n);
	orgNum = n;//1634
	while(n>0)
	{
		rem = n % 10;
		cube = (rem * rem * rem * rem) + cube;
		n = n / 10;
	}
	if (orgNum == cube)
		printf("its a Armstrong Number");
	else
		printf("Not Armstrong Number");

	return 0;

}