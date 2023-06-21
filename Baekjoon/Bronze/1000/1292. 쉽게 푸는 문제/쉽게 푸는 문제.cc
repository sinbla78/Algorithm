#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

//백준 1292번 코드
int arr[1000];
int main() {
	int cnt = 0;
	int sum = 0;
	int i = 0;
	while (i < 1000) {
		cnt++;
		sum += cnt;
		while (i < sum) {
			arr[i] = cnt;
			i++;
		}
	}

	int a, b;
	scanf("%d %d", &a, &b);
	sum = 0;
	for (i = a-1; i <= b-1; i++) {
		sum += arr[i];
	}
	printf("%d", sum);
}