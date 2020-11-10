#include<stdio.h>

int main()
{
	int N, i, answer, c = 0, nc = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf(" %d", &answer);
		if (answer)
			c++;
		else
			nc++;
	}
	if (c > nc)
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");
	return 0;
}