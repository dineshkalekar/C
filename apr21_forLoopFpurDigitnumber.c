#include<stdio.h>
int main() {
	int n,r,sum=0;
	printf("Enter four Digit Number\t");
	scanf_s("%d", &n);
	int x = n;
	for (; n != 0;) {
		r =n % 10;
		sum = sum + r;
		n =n / 10;
		printf("r=%d---Sum=%d---n=%d\n", r, sum, n);
	}printf("\n\n\n Sum of Digits of %d is %d\n",x,sum);
}