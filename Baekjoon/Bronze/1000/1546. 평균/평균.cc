#include <stdio.h>

int main() {
	int n, score;
	scanf("%d", &n);

	int max = 0;
	int total = 0;

	for (int i = 0; i < n; ++i) {
		scanf("%d", &score);
		total += score;
		if (score > max) {
			max = score;
		}
	}

	printf("%f\n", 100.0 * total / n / max);

	return 0;
}