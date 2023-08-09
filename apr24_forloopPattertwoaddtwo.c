#include<stdio.h>
int main()
{
	int i, j;
	for (i=50;i>=1;i--)
	{
		for (j=50;j>=i;j=j+4) 
		{
			printf("%d\t",j);
		}printf("\n");
	}
	return 0;
}