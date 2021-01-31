#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N, M, L, ans;
	scanf("%d %d %d", &N, &M, &L);
	int arr[102];
	arr[0] = 0; arr[N + 1] = L;
	for (int i = 1; i < N + 1; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + N + 1);
	int right = L, left = 1;
	while (right >= left)
	{
		int sum = 0;
		int mid = (left + right) / 2;
		for (int i = 0; i < N + 1; i++)
			sum += ((arr[i + 1] - arr[i] - 1) / mid);
		if (sum <= M) right = mid - 1;
		else
		{
			ans = mid;
			left = mid + 1;
		}
	}
	printf("%d", left);
	return 0;
}