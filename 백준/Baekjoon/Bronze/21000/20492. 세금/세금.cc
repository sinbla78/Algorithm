#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	printf("%d %d", a / 100 * 78, a - a / 100 * 20 / 100 * 22);
}