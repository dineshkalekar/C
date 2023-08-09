#include<stdio.h>
#include<stdlib.h>
int main() {
	int i = 1, n;
	do {
		printf("Enter a number");
		scanf_s("%d", &n);
		if (n == 2)
			exit(0);

		printf("\n No.is %d\n", n);
		i++;
	} while (i <= 5);
	return 0;



}