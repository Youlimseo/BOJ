#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N;
	scanf("%d", &N);
	int space[101][101] = { 0, };
	int x, y, length, width;
	for (int n = 1; n < N + 1; n++)
	{
		scanf("%d %d %d %d", &x, &y, &length, &width);
		for (int i = x; i < x + length; i++)
			for (int j = y; j < y + width; j++)
				space[i][j] = n;
	}
	for (int n = 1; n < N + 1; n++)
	{
		int sum = 0;
		for (int i = 0; i < 101; i++)
			for (int j = 0; j < 101; j++)
				if (space[i][j] == n)
					sum++;
		printf("%d\n", sum);
	}

}