#include<stdio.h>

int main()
{
	int num[8];
	int i;
	int a = 0, b = 0;

	for (i = 0; i < 8; i++)
		scanf("%d", &num[i]);

	for (i = 1; i <= 8; i++)
	{
		if (i == num[i - 1])
			a++;
	}
	for (i = 8; i >= 1; i--)
	{
		if (i == num[8 - i])
			b++;
	}

	if (a == 8)
		printf("ascending \n");
	else if (b == 8)
		printf("descending \n");
	else
		printf("mixed \n");

	return 0;
}