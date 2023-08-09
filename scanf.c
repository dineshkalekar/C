#include <stdio.h>
int main() {
	int A, B;
	printf("enter A :");
	scanf_s("%d",&A);   
	printf("enter B :");
	scanf_s("%d",&B);

	int sum = A - B;
	printf("sum is : %d", sum);

	return 0;

}