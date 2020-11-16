#include<stdio.h>
int Return_xy(int* p);
int main()
{
	int x[4], y[4];
	for (int i = 0; i < 3; i++)
		scanf("%d %d", &x[i], &y[i]);
	x[3] = Return_xy(x);
	y[3] = Return_xy(y);
	printf("%d %d", x[3], y[3]);
	return 0;
}
int Return_xy(int* p)
{
	if (*p == *(p + 1))
		return *(p + 2);
	else if (*p == *(p + 2))
		return *(p + 1);
	return *p;
}