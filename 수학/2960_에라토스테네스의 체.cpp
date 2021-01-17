#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	int arr[1002], visited[1002] = { 0, };
	int num, cnt = 0;
	for (int i = 0; i < N + 1; i++)
		arr[i] = i;

	for (int i = 2; i <= N; i++)
	{
		if (visited[i])
			continue;
		visited[i] = 1;
		num = arr[i];
		cnt++;
		if (cnt == K)
			break;
		for (int j = i + i; j <= N; j += i)
		{
			if (visited[j])
				continue;
			visited[j] = 1;
			num = arr[j];
			cnt++;
			if (cnt == K)
				break;
		}
		if (cnt == K)
			break;
	}

	printf("%d", num);
}