#include<stdio.h>

int main()
{
	int n, i, num[20] = { 1,1 };

	scanf("%d", &n);

	for (i = 2; i < n; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
	}

	printf("%d", num[n - 1]);
	return 0;
}