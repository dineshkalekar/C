#include<stdio.h>
int i, j; // global
int accept(int a[][3]);
int accept(int a[][3])
{
	printf("Enter Array Elements ");
	for (i = 0; i < 3; i++) // no. of rows
	{
		for (j = 0; j < 3; j++) //no. of coloms
		{
			printf("\n Enter %dx%d Elements", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
int display(int a[][3]);
int display(int a[][3])
{

	printf("\n\n Displaying Array Elements\n");
	for (i = 0; i < 3; i++) // no. of row
	{
		for (j = 0; j < 3; j++) // no. of coloms
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int a[3][3]; // array declartation
	
	accept(a);
	display(a);
	return 0;
}