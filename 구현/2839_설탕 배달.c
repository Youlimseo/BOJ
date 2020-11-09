#include<stdio.h>

int main()
{
	int a, b, x, cnt = 0;
	scanf_s("%d", &x);
	a = x / 5;
	while (1)
	{
		b = (x - (5 * a)) / 3;
		if (a>0&&(x - (5 * a)) % 3)
			a--;
		else if ((x - (5 * a)) % 3)
		{
			cnt = 1;
			break;
		}
		else
			break;
	}
	if (cnt)
		printf("-1");
	else
		printf("%d", a + b);
	return 0;
}