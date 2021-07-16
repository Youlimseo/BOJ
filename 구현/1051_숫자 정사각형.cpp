#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int square[51][51];
	int N, M;

	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			scanf("%1d", &square[i][j]);
	
	int max_len = min(N, M);
	int ans = 1;

	for (int i = 1; i<max_len; i++)//길이조절
		for (int j = 0; j < N - i; j++)//세로
			for (int k = 0; k < M - i; k++)//가로
				if ((square[j][k] == square[j + i][k]) && (square[j][k] == square[j][k + i]) && (square[j][k] == square[j + i][k + i]))
					ans = max(ans, i + 1);

	printf("%d", ans * ans);
	return 0;
}