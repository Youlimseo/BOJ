#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N,C, ans;
	scanf("%d %d", &N, &C);
	int X[200000];
	for (int i = 0; i < N ; i++)
		scanf("%d", &X[i]);
	sort(X, X + N);
	int right = X[N-1], left = 1;
	while (right >= left)
	{
		int sum = 1;
		int mid = (left + right) / 2;
		for (int i = 1,j=0; i < N + 1; i++)
			if (X[i] - X[j] >= mid)
			{
				j = i;
				sum++;
			}
		if (sum < C) right = mid - 1;
		else
		{
			ans = mid;
			left = mid + 1;
		}
	}
	printf("%d", ans);
	return 0;
}