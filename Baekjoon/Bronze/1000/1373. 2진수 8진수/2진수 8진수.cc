#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>

int s;


int main(void)
{
	int s;
	char input[1000001];
	scanf("%s", &input);
	int len = strlen(input);

	int part = int(len / 3);
	
	if (input[0]-48 == 0) printf("0");
	else
	{
		if (len % 3 == 1)
		{
			printf("1");
			s = 1;
			for (int i = 0; i < part; i++)
			{
				printf("%d", 4 * (input[s + 3 * i] - 48) + 2 * (input[s + 3 * i + 1] - 48) + (input[s + 3 * i + 2] - 48));
			}
		}
		else if (len % 3 == 2)
		{
			printf("%d", 2 * (input[0] - 48) + input[1] - 48);
			s = 2;
			for (int i = 0; i < part; i++)
			{
				printf("%d", 4 * (input[s + 3 * i] - 48) + 2 * (input[s + 3 * i + 1] - 48) + (input[s + 3 * i + 2] - 48));
			}
		}
		else
		{
			s = 0;
			for (int i = 0; i < part; i++)
			{
				printf("%d", 4 * (input[s + 3 * i] - 48) + 2 * (input[s + 3 * i + 1] - 48) + (input[s + 3 * i + 2] - 48));
			}
		}
	}
	


}