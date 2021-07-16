#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N, S, ans = 0;
	int num[21];

	scanf("%d %d ", &N, &S);
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);

	for (int i = 1; i < (1 << N); i++) //000,001,010.. 처럼 2의 n승으로 부분수열 체크
	{
		int sum = 0;
		for (int j = 0; j < N; j++)
			if ((1 << j) & i) //자리마다 체크 -> 010이면 두번째자리 숫자만
				sum += num[j];

		if (sum == S)
			ans++;
	}
	printf("%d", ans);
	return 0;
}