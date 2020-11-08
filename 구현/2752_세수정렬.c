#include<stdio.h>

int main()
{
	int num[3];
	int change;
	int i, j;
	scanf("%d %d %d", &num[0], &num[1], &num[2]);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (num[j] > num[j + 1])
			{
				change = num[j];
				num[j] = num[j + 1];
				num[j + 1] = change;
			}
		}
	}
	printf("%d %d %d", num[0], num[1], num[2]);
	return 0;
}