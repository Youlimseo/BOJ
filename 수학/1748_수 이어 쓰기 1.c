#include<stdio.h>

int main()
{
	int i, j;
	int N, power;
	int sum = 0;
	scanf("%d", &N);
	//자릿수 판별 10으로 나눠서 몫이 10보다 작으면 한자릿수라는 개념
	for (i = 1; i <= N; i++)
	{
		for (power = 1, j = i; j > 9; power++)
			j /= 10;
		sum += power;
	}
	printf("%d", sum);
	return 0;
}