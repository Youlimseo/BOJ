#include<stdio.h>

int main()
{
	int N, num;
	scanf("%d", &N);

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num);
		N -= num;
	}
	printf("%d", N);
	return 0;
}