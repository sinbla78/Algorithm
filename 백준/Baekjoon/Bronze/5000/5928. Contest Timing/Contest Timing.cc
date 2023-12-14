#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int D, H, M;
	int result = 0;
	scanf("%d %d %d", &D, &H, &M);
	if (D < 11) {
		result = -1;
	}
	else if (D == 11) {
		if (H < 11) {
			result = -1;
		}
		else if (H == 11) {
			if (M < 11) {
				result = -1;
			}
		}
	}
	else {
		result = (D - 11) * 24 * 60 + (H - 11) * 60 + (M - 11);
	}
	printf("%d", result);
}
