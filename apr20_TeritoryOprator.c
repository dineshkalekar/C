#include<stdio.h>
int main() {
	int yr;
	printf("Enter yr");
	scanf_s("%d", &yr);
	(yr % 4 == 0 && yr % 400 == 0 || yr % 100 != 0) ? printf("%d is Leap yr", yr) : printf("%d is not a Leap yr", yr);

	return 0 ;
}
