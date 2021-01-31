#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int K, N, ans;
	int arr[10000];
	scanf("%d %d", &K, &N);
	for (int i = 0; i < K; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + K);
	long long right = arr[K - 1], left = 1;
	while (right >= left)
	{
		int sum = 0;
		long long mid = (left + right) / 2;
		for (int i = 0; i < K; i++)
			sum += arr[i] / mid;
		if (sum < N) right = mid - 1;
		else
		{
			ans = mid;
			left = mid + 1;
		}
	}
	printf("%d", ans);
	return 0;
}