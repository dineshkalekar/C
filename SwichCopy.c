#include<stdio.h>
int main() {
	int day; // 1-5 is working days , 6-7 is weekly off
	printf("enter day :");
	scanf_s("%d", &day);
	if (day >= 1 && day <= 5)
	{
		printf("its a Working day \n");
	} 
	if (day >= 6 && day <= 7) {
		printf(" its a Weekly off \n ");	
	}
	else {
		printf("invalid input");
	}

	  
}