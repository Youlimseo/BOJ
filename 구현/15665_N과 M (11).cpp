#include<iostream>
#include<algorithm>
using namespace std;
int N, M;
int arr[10], ans[10];
void go(int location)
{
	if (M == location)
	{
		for (int i = 0; i < M; i++)
			printf("%d ", ans[i]);
		printf("\n");
		return;
	}
	int num[10005] = { 0, };
	for (int i = 1; i <= N; i++)
		if (!num[arr[i]])
		{
			num[arr[i]] = 1; ans[location] = arr[i];
			go( location + 1);
			ans[location] = 0;
		}
	return;
}
int main()
{
	
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++)
		scanf("%d", &arr[i]);
	sort(arr+1, arr + N+1);
	go(0);
}