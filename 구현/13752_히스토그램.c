#include<stdio.h>

int main()
{
	int N, num;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		for (int j = 0; j < num; j++)
			printf("=");
		printf("\n");
	}

	return 0;
}