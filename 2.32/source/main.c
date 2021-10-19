#include<stdio.h>
#include<stdlib.h>

int main(void) {
	double a, b, BMI;
	printf("Insert your height(cm) \n");
	scanf_s("%lf", &a);
	printf("Insert your weight(kg) \n");
	scanf_s("%lf", &b);
	BMI = b /( (a / 100)*(a / 100));
	printf("your BMI is %lf\n", BMI);

	if (BMI < 18.5)
		printf("Underweight");
	if (BMI > 18.5 && BMI < 24.9)
		printf("Normal");
	if (BMI > 25 && BMI < 29.9)
		printf("Overweight");
	if (BMI > 30)
		printf("Obese");
}