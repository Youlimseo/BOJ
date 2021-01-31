#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N, M, ans;
	scanf("%d %d", &N, &M);
	int arr[300000];
	for (int i = 0; i < M; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + M);
	int right = arr[M - 1], left = 1;
	while (right >= left)
	{
		int sum = 0;
		int mid = (left + right) / 2;
		for (int i = 0; i < M; i++)
		{
			sum += (arr[i] / mid);
			if (arr[i] % mid)sum++;
		}
		if (sum > N) left = mid + 1; 
		else
		{
			ans = mid;
			right = mid - 1;
		}
	}
	printf("%d", ans);
	return 0;
}