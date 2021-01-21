#include<iostream>
#include<algorithm>
using namespace std;
char paper[64][64];
void Quardtree(int n, int x, int y)
{
	char color = paper[x][y];
	for (int i = x; i < x + n; i++)
		for (int j = y; j < y + n; j++)
		{
			if (paper[i][j] != color)
			{
				printf("\(");
				Quardtree(n / 2, x, y);
				Quardtree(n / 2, x, y + n / 2);
				Quardtree(n / 2, x + n / 2, y);
				Quardtree(n / 2, x + n / 2, y + n / 2);
				printf("\)");
				return;
			}
		}
	if (color-'0')printf("1");
	else printf("0");
	return;
}
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%s", paper[i],N);
	Quardtree(N, 0, 0);
}