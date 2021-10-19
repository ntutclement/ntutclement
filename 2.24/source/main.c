#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("Please insert an integer ");
	scanf_s("%d", &a);
	a = a % 2;
	if (a == 0)
		printf("integer is even");
	if (a != 0)
		printf("integer is odd");
}