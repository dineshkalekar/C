#include<stdio.h>
float SimpleInterest(float p, float n, float r); // declearation
float SimpleInterest(float p, float n, float r)  // definition
{
	float si;

	 
	si = (p * n * r) / 100;
	return si;

}
void main() {
	float p, n, r,si;
	printf("Enter p n r ");
	scanf_s("%f%f%f", &p, &n, &r);

	si =SimpleInterest(p, n, r);  // funtion call
	printf("Simple interest is %f ", si);
	return 0;
	

}
