#include<stdio.h>

int main()
{
	int L, T;
	scanf("%d", &L);
	T = (L / 5);
	if (L % 5)
		T++;
	printf("%d", T);
	return 0;
}