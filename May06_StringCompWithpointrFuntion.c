#include<stdio.h>
#include<conio.h>
int StringComp(char *p1, char *p2);
int StringComp(char* p1, char* p2)
{
	int i = 0;
	do {
		if (*p1 > *p2)
			return +1;
		if (*p1 < *p2)
			return -1;
		p1++;
		p2++;
	} while (*p1 = *p2 != '\0');
	return 0;
}
int main ()
{
	char str1[15], str2[15];
	int res;
	printf("Enter String - 1");
	gets(str1);
	printf("Enter String - 2");
	gets(str2);
	res = StringComp(str1, str2);
	if (res == 1)
		printf("String 1 is Greater");
	if (res == 0)
		printf("Both are Equal ");
	else
		printf("\nString 2 is greater ");
	return 0;
}

