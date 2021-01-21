#include<iostream>
#include<algorithm>
using namespace std;
char star[2187][2187];
void MakeStar(int n, int x, int y)
{
	if ((n / 3) < 1)return;
	for (int i = x; i < x + n; i++)
		for (int j = y; j < y + n; j++)
		{
			if ((i-x) / (n/3) == 1 && (j-y) / (n/3) == 1)
				star[i][j] = ' ';
		}
	if ((n / 3) > 1)
	{
		MakeStar(n / 3, x, y);
		MakeStar(n / 3, x + n / 3, y);
		MakeStar(n / 3, x + 2 * n / 3, y);
		MakeStar(n / 3, x, y + n / 3);
		//MakeStar(n / 3, x + n / 3, y + n / 3);
		MakeStar(n / 3, x + 2 * n / 3, y + n / 3);
		MakeStar(n / 3, x, y + 2 * n / 3);
		MakeStar(n / 3, x + n / 3, y + 2 * n / 3);
		MakeStar(n / 3, x + 2 * n / 3, y + 2 * n / 3);
	}
	return;
}
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			star[i][j] = '*';
	MakeStar(N,0,0);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%c", star[i][j]);
		printf("\n");
	}
}