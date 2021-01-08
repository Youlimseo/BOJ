#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b)//유클리드 호제법
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int main()
{
	int T, N;
	int arr[101];
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &N);
		for (int i = 0; i < N; i++)
			scanf("%d", &arr[i]);
		long long sum = 0;
		//가능한 경우의 수
		for (int i = 0; i < N; i++)
			for (int j = 0; j < i; j++)
			{//정렬이 되지않은 경우
				if (arr[i] > arr[j])
					sum += gcd(arr[i], arr[j]);
				else
					sum += gcd(arr[j], arr[i]);
			}
		printf("%lld\n", sum);
	}
	return 0;
}