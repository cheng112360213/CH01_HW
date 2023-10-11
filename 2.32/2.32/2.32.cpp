#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	float h, hm, w, bmi;

	printf("input your height(cm):");
	scanf("%f", &h);
	printf("input your weight(kg):");
	scanf("%f", &w);
	hm = h / 100;
	bmi = w / (hm*hm);
	printf("bmi:%f\n\n", bmi);
	printf("BMI VALUES\n");
	printf("Underweight:less than 18.5\n");
	printf("Normal:     between 18.5 and 24.9\n");
	printf("Overweight: between 25 and 29.9\n");
	printf("Obese:      30 or greater\n");
	return 0;
}