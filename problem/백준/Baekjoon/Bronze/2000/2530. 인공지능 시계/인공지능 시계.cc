#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	c += d;
	
	while (c >= 60) {
		b++;
		c -= 60;
	}

	while (b >= 60) {
		a++;
		b -= 60;
	}

	while (a >= 24) {
		a -= 24;
	}

	printf("%d %d %d", a, b, c);
}