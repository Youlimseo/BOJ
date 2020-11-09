#include<stdio.h>

int main()
{
	int T, i;
	int N[25], M[25], U[25]; //´ß, ´Ù¸®, ´Ù¸®ÇÏ³ª´ß

	scanf("%d", &T);
	for (i = 1; i <= T; i++)
	{
		scanf("%d %d", &M[i], &N[i]);
	}
	for (i = 1; i <= T; i++)
	{
		U[i] = (2 * N[i]) - M[i];
		printf("%d %d \n", U[i], N[i] - U[i]);
	}
	return 0;
}