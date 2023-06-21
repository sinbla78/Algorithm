#include<stdio.h>
int main() {
	int l, p, people[6], i, count;
	scanf("%d %d", &l, &p);
	count = l * p;
	for (i = 0; i < 5; i++) {
		scanf("%d", &people[i]);
		printf("%d ", people[i] - count);
	}
}