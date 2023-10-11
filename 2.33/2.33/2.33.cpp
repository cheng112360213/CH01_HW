#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	float a, b, c, d, e, total1, total;
	printf("Total miles driven per day:");
	scanf("%f", &a);
	printf("Cost per gallon of gasonline:");
	scanf("%f", &b);
	printf("Average miles per gallon:");
	scanf("%f", &c);
	printf("Parking fees per day:");
	scanf("%f", &d);
	printf("Tolls per day:");
	scanf("%f", &e);

	total1 = (a / c)*b;
	total = total1 + d + e;
	printf("%f", total);
	return 0;
}