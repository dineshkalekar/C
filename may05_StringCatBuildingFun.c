#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	char str1[15], str2[15];
	printf("Eneter String - 1 ");
	gets(str1);

	printf("Eneter String - 2 ");
	gets(str2);

	strcat(str1, str2);
	printf(" Conteneted String is ");
	puts(str1);
	 
	return 0;

}