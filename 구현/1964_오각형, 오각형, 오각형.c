#include<stdio.h>

int main()
{
	int N, i;
	long result = 0;
	scanf("%d", &N);
	for (i = 0; i <= N; i++)
	{
		result += (3 * i) + 1;
	}
	printf("%ld", result % 45678);
	return 0;
}