#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	long long memoization[90];
	memoization[0] = 0; memoization[1] = 1;
	for (int i = 2; i < n+1; i++)
		memoization[i] = memoization[i - 1] + memoization[i - 2];
	printf("%lld", memoization[n]);
	return 0;
}