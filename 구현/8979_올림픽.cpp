#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	int medal[1000][5];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < 4; j++)
			scanf("%d", &medal[i][j]);
	int nation = 1;
	int n;
	for (int i = 0; i < N; i++)
		if (medal[i][0] == K)
			n = i;
	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			if (medal[i][j] > medal[n][j])
			{
				nation++;
				break;
			}
			else if (medal[i][j] < medal[n][j])
				break;
		}
	}
	printf("%d", nation);
}