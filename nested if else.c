#include<stdio.h>
int main() {
	int number;
	printf("enter a number\n");
	scanf_s("%d", &number);

	if (number >= 0) {
		printf(" positive \n");
		if (number % 2 == 0); 
			printf("Even \n");
		}
		else {
			printf("odd\n"); 
		}
		// else {
			 printf(" Negative \n");

		 }
		
	
	

