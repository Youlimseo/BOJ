#include<stdio.h>

int main()
{
	int num, i, j, k;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (k = 0; k < (2 * (num - i)) - 1; k++)
			printf("*");
		printf("\n");
	}
	for (i = num - 2; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (k = 0; k < (2 * (num - i)) - 1; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}