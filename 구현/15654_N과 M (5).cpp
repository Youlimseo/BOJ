#include<iostream>
#include<algorithm>
using namespace std;
int arr[10], ans[10], check[10];
void go(int N, int M, int location)
{
	if (M == location)
	{
		for (int i = 0; i < M; i++)
			printf("%d ", ans[i]);
		printf("\n");
		return;
	}
	for (int i = 1; i <= N; i++)
		if (!check[i])
		{
			check[i] = 1; ans[location] = arr[i];
			go(N, M, location + 1);
			check[i] = 0; ans[location] = 0;
		}
	return;
}
int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++)
		scanf("%d", &arr[i]);
	sort(arr + 1, arr + N + 1);
	go(N, M, 0);
}