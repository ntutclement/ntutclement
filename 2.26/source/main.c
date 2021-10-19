#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;
	printf("Please insert num1 num2 ");
	scanf_s("%d%d", &a, &b);
	if (a % b == 0) {
		printf("the first is multiple of second");
	}
	else {
		printf("the first is not multiple of second");
	}
}