#include<stdio.h>
int main() {
	int a[3][3];
	int i, j;
	printf("Enter Array Elements ");
	for (i=0;i<3;i++) // array declaration
	{
		for (j=0;j<3;j++) 
		{
			printf("\n Enter %dx%d Elements", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}printf("\n\n Displaying Array Elements\n");
	for (i = 0; i < 3; i++) // no. of row
	{
		for(j = 0; j < 3; j++) // no. of coloms
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}