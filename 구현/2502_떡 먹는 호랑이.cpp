#include<iostream>
#include<algorithm>
using namespace std;
int memoization[30];
void fibo(int start, int end)
{
	if (start > end)
		return;
	memoization[start] = memoization[start - 1] + memoization[start - 2];
	fibo(start + 1, end);
}
int main()
{
	int A, B, D, K, is_true = 0;
	scanf("%d %d", &D, &K);
	for (A = 1; A < K; A++)
	{
		for (B = 1; B < K; B++)
		{
			memoization[1] = A;
			memoization[2] = B;
			fibo(3, D);
			if (memoization[D] == K)
			{
				printf("%d\n%d", A, B);
				is_true = 1;
				break;
			}
			if (memoization[D] > K)
				break;
		}
		if (is_true)
			break;
	}
	return 0;
}