#include<iostream>
#include<algorithm>
using namespace std;
int paper[128][128];
int B = 0, W = 0;
void Papercut(int n,int x,int y)
{
	int color = paper[x][y];
	for(int i=x;i<x+n;i++)
		for (int j = y; j < y + n; j++)
		{
			if (paper[i][j] != color)
			{
				Papercut(n / 2, x, y);
				Papercut(n / 2, x, y + n / 2);
				Papercut(n / 2, x + n / 2, y);
				Papercut(n / 2, x + n / 2, y + n / 2);
				return;
			}
		}
	if (color)B++;
	else W++;
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
	printf("%d\n%d", W, B);
}