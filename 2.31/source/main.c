#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("number	square	cube\n");
	int a;
	a = 0;
	for (a = 0; a <= 10; a++){
		printf("%d	%d	%d\n",a,a*a,a*a*a);
	}
	return 0;
}
