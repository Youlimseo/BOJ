#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	int num[300000];
	int diff[300000];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
		if (i)diff[i - 1] = num[i] - num[i - 1];
	}
	//각 인원의 차이를 정렬해서 N-K만큼 더하면 됌
	sort(diff, diff + N - 1);
	int sum = 0;
	for (int i = 0; i < N - K; i++)
		sum += diff[i];
	printf("%d", sum);
	return 0;
}