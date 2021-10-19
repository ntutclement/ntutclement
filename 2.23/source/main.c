#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c,max,min;
	printf("Please insert three integers ");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a >= b && a >= c && b >= c) {
		max = a;
		min = c;
	}
	if (a >= b && a >= c && c >= b) {
		max = a;
		min = b;
	}
	if (b >= a && b >= c && c >= a) {
		max = b;
		min = a;
	}
	if (b >= a && b >= c && a >= c) {
		max = b;
		min = c;
	}
	if (c >= b && c >= a && a >= b) {
		max = c;
		min = b;
	}
	if (c >= b && c >= a && b >= a) {
		max = c;
		min = a;
	}
	printf("maxium is %d\n", max);
	printf("minium is %d\n", min);
	if (a == b && b == c && a == c) {
		printf("Three integers are same");
	}
	return 0;
}