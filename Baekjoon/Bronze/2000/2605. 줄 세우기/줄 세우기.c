#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//줄 세우기
int arr[100];
int swap(int* a, int* b);
int main(void)
{
	int i, j, n, num;
	scanf("%d", &n);
    
	for (i = 0; i < n; i++){
		arr[i] = i + 1;
		scanf("%d", &num);

		for (j = i; j > i - num; j--)
			swap(&arr[j], &arr[j - 1]);
	}

	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
int swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}