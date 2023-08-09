#include<stdio.h>
int i;
void accept (int a[]); // declaration
void display (int a[]);

void accept(int a[])  // define
{
	printf("\n Enter array Elements -");
	for (i = 0; i <= 4; i++)
	{
		printf("\n\n Enter array index is %d-", i);
		scanf_s("%d", a + i);
	}
}
void display(int a[]) // define
{
	printf("\nDisplying Array Elements -");
	for (i = 0; i <= 4; i++)
	{
		printf("\t%d", *(a + i));
	}
}
void main() 
{
	int a[5];
	accept(a);  // call function
	display(a);// call funtion 

	return 0;
}