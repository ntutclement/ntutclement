#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	float a, b, c, d, e,f,save,total;

	printf("Insert total kilometers driver per day \n");
	scanf_s("%f" ,&a);
	printf("Insert cost per liter of gasoline \n");
	scanf_s("%f", &b);
	printf("Insert average kilometers per liter \n");
	scanf_s("%f", &c);
	printf("Insert parking fees per day \n");
	scanf_s("%f", &d);
	printf("Insert tolls per day \n");
	scanf_s("%f", &e);
	printf("Insert cost of carpool \n");
	scanf_s("%f", &f);

	total = (a/c)*b + d + e;
	printf("Your cost total is $%.1f\n", total);
	save = total -f ;
	printf("You save $%.1f", save);
}