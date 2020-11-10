#include<stdio.h>

int main()
{
	int a, b, c, d, p;
	int result1, result2;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &p);
	result1 = a * p;
	if (p < c)
		result2 = b;
	else
		result2 = b + ((p - c) * d);
	printf("%d", (result1 < result2) ? result1 : result2);
	return 0;
}