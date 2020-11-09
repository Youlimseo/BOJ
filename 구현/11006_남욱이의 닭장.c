#include<stdio.h>

int main()
{
	int a, b, x;
	scanf_s("%d", &x);
	a = x / 5;
	while (1)
	{
		b = (x - (5 * a)) / 3;
		if ((x - (5 * a)) % 3)
			break;
		else
			a--;
	}
	return 0;
}