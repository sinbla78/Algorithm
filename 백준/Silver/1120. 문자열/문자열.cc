#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j;
	char a[51], b[51];

	scanf("%s %s", &a, &b);

	int min = strlen(b);

	for (i = 0; i <= strlen(b) - strlen(a); i++) {
		int tmp = 0, cnt = 0;

		for (j = i ; j < i + strlen(a); j++) {
			if (a[cnt] != b[j])
				tmp++;

			cnt++;
		}
		
		if (min > tmp)
			min = tmp;
	}

	printf("%d\n", min);

	return 0;
}