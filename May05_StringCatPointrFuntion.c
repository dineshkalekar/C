#include<stdio.h>
void strcat(char *p1, char *p2);
void strcat(char* p1, char* p2)
{
	while (*p1 != '\0') // find length 
	{
		p1++; // next Address
	}
	while(*p1=*p2 !='\0')
	{
		*p1 = *p2;
		 p1++;
		 p2++;
	}
}
int main()
{
	char str1[15], str2[15];
	printf("Enter String - 1 ");
	//gets(str1);
	printf("Enter String - 2 ");
	//gets(str2);

	strcat(str1, str2);
	printf("Concatenated String is;");
	puts(str1);

	return 0;
}