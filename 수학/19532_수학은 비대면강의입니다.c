#include<stdio.h>
int main()
{
	int a, b, c, d, e, f;
	int x, y;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	y = (a * f - c * d) / (a * e - b * d);
	x = (b * f - e * c) / (b * d - a * e);
	printf("%d %d\n", x, y);
}