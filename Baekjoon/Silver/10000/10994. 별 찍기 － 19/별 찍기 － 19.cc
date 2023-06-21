#include <stdio.h>

int main()
{
	int n, cnt = 0;
	scanf("%d", &n);

	for (int star = 0; star < (n - 1) * 4 + 1; star++) // 첫번째 줄 무조건 실행
		printf("*");
	printf("\n");

	for (int i = 2; i <= 2*n-1; i++) // 도형의 윗부분(중간포함)
	{
		for (int j = 0; j <= cnt; j++) // 외벽(왼쪽)
			printf("* ");

		if (i % 2 == 1)
			for (int star = 0; star < (n - i + cnt + 1) * 4 + 1; star++) // 별 부분
				printf("*");
		else if (i % 2 == 0)
			for (int kuhaku = 0; kuhaku < (n - i + cnt) * 4 + 1; kuhaku++) // 공백 부분
				printf(" ");

		for (int j = 0; j <= cnt; j++) // 외벽(오른쪽)
			printf(" *");
		if (i % 2 == 1) // 2줄을 1개로 묶어서 실행 횟수 증가
			cnt++;
		printf("\n"); // 1줄 끝
	}

	cnt--; // 중간이 포함된 횟수 감소

	for (int i = 2; i <= 2 * n - 2; i++)
	{
		for (int j = 0; j <= cnt; j++) // 외벽 (왼쪽)
			printf("* ");

		if (i % 2 == 1)
			for (int star = 0; star < (i - n + cnt + 1) * 4 + 1; star++)
				printf("*");
		else if (i % 2 == 0)
			for (int kuhaku = 0; kuhaku < (i - n + cnt) * 4 + 1; kuhaku++)
				printf(" ");

		for (int j = 0; j <= cnt; j++) // 외벽 (오른쪽)
			printf(" *");
		if (i % 2 == 0) // 2줄을 1개로 묶어서 실행 횟수 감소
			cnt--;
		printf("\n");
		if (i >= 2 * n - 2) // 마지막 줄 일경우 실행, n을 1로 주었을 때 *을 1개만 출력하기 위해서
		{
			for (int star = 0; star < (n - 1) * 4 + 1; star++)
				printf("*");
			printf("\n");
		}
	}
}