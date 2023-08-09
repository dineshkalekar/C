#include<stdio.h>
//#include"Myheader"
float AreaCircle(int rad);
float AreaCircle(int rad) {
	float a;
	a = 3.14 * rad * rad;
	return a;
}
void main() {
	int r;
	float res;
	printf("Enter A Radius");
	scanf_s("%d", &r);
	res = AreaCircle(r);
	printf("\n Area of Circle is %f", res);

	return 0;
}