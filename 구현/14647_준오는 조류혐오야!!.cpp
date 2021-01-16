#include<iostream>
#include<algorithm>
using namespace std;
int check9(int num, int nine)
{
	if (num < 1)
		return nine;
	if (num % 10 == 9)
		return check9(num / 10, ++nine);
	else
		return check9(num / 10, nine);
}
int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	int bingo[500][500];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			scanf("%d", &bingo[i][j]);
	
	int sum9 = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			sum9 += check9(bingo[i][j], 0);

	int max = 0;
	//가로
	for (int i = 0; i < N; i++)
	{
		int sum = 0;
		for (int j = 0; j < M; j++)
			sum += check9(bingo[i][j], 0);
		if (sum > max)
			max = sum;
	}
	//세로
	for (int j = 0; j < M; j++)
	{
		int sum = 0;
		for (int i = 0; i < N; i++)
			sum += check9(bingo[i][j], 0);
		if (sum > max)
			max = sum;
	}
	printf("%d\n", sum9 - max);
}