#include <stdio.h>

int main(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	a = a * 56;
	b = b * 24;
	c = c * 14;
	d = d * 6;
	printf("%d", a + b + c + d);
	return 0;
}