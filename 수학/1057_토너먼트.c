#include<stdio.h>
int main()
{
	int N, A, B;
	int round = 0;
	scanf("%d %d %d", &N, &A, &B);
	while (A != B)
	{
		A = (A + 1) / 2;
		B = (B + 1) / 2;
		round++;
	}
	printf("%d", round);
}