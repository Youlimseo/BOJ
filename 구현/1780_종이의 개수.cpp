#include<iostream>
#include<algorithm>
using namespace std;
int paper[2187][2187];
int one = 0, zero = 0, minusone = 0;
void Papercut(int n,int x,int y)
{
	int number = paper[x][y];
	for(int i=x;i<x+n;i++)
		for (int j = y; j < y + n; j++)
		{
			if (paper[i][j] != number)
			{
				Papercut(n / 3, x, y);
				Papercut(n / 3, x + n / 3, y);
				Papercut(n / 3, x + 2 * n / 3, y);
				Papercut(n / 3, x, y + n / 3);
				Papercut(n / 3, x + n / 3, y + n / 3);
				Papercut(n / 3, x + 2 * n / 3, y + n / 3);
				Papercut(n / 3, x, y + 2 * n / 3);
				Papercut(n / 3, x + n / 3, y + 2 * n / 3);
				Papercut(n / 3, x + 2 * n / 3, y + 2 * n / 3);
				return;
			}
		}
	if (!number)zero++;
	else if (number == 1)one++;
	else minusone++;
	return;
}
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &paper[i][j]);
	Papercut(N,0,0);
	printf("%d\n%d\n%d", minusone, zero, one);
}