#include<stdio.h>
int main() {
	float price[3];
	printf("Eneter 3 values ");
	scanf_s("%f", &price[0]);
	scanf_s("%f", &price[1]);
	scanf_s("%f", &price[2]);

	printf("Price with Gst 1 :%f\n", price[0] + (0.18 * price[0]));
	printf("Price with Gst 2 :%f\n", price[1] + (0.18 * price[1]));
	printf("Price with Gst 3 :%f\n", price[2] + (0.18 * price[2]));

	return 0;
}