#include<stdio.h>
int main () 
{
	int one, two, three, four;

	for (one = 1, two = 2, three = 3, four = 4;(one<=10,two<=20,three<=30,four<=40); one = one + 1, two = two + 2, three = three + 3, four = four + 4)

	{
		printf("\n\n %d\t%d\t%d\t%d\t", one, two, three, four);
	}
		
	return 0;



}