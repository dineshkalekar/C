#include <stdio.h>
int main(){
	float x, y, z;
	printf(" Enter a Number x , y ,z :");
	scanf_s("%f%f%f", &x,&y,&z);
	
	float sum = (x + y + z )/ 3;     
	printf("sum is :%f", sum);

	return 0;
}