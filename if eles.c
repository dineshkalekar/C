#include <stdio.h>
int main() {
	/*int age;
	printf("enter age : ");
	scanf_s("%d", &age);

	if (age > 18) {
		printf("Adult \n");
	}
	else {
		printf("not Adult \n");
	}
	    printf(" ....Thank You.... ");*/

		// or

		int Age;
		printf("enter your Age :");
		scanf_s("%d\n", &Age);
		Age >= 18 ? printf("Adult") : printf("Not Adult");
		return 0;



}