#include<stdio.h>

int main()
{
	int a[4], b[4], i, person = 0, result = 0;
	for (i = 0; i < 4; i++)
		scanf(" %d %d", &a[i], &b[i]);

	for (i = 0; i < 4; i++)
	{
		person += b[i];
		person -= a[i];
		if (result < person)
			result = person;
	}
	printf("%d", result);
	return 0;
}