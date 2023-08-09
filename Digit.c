#include <stdio.h>
int main() {
	char ch;
	printf("Enter Any Character: ");
	scanf_s("%c\n", &ch);

	if (ch>='0' && ch<='9')
	{
		printf("%c Its A Digit",ch);
	}
	else {
		printf("%c Its Not A Digit",ch);
	}
	return 0;

}