#include<stdio.h>
int main() {
	int day;
	printf("Enter Number ");
	scanf_s("%d", &day);

	switch (day)
	{
	case 0:printf("Zero");
		break;
	case 1: printf("One");
		break;
	case 2: printf("Two");
		break;
	case 3: printf("Three");
		break;

	default:printf(" Invalid Numbar");
		break;
	}
		
	return 0;
}