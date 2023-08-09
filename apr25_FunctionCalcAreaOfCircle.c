#include<stdio.h>
float AreaCircle(int rad);// deleration
float AreaCircle(int rad)// defination
{
	float a;
	a = 3.14 * rad * rad;
	return a;
}
void main() 
{
	int r;
	float res;
	printf("Enter Radius\t");
	scanf_s("%d", &r);
	res = AreaCircle(r);// call to function
	printf(" Area of Circle is %f", res);

	return 0;
}