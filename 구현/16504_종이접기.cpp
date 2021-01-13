#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N, a;
	scanf("%d", &N);
	long long sum = 0;
	//종이접기는 속임수고 어차피 다 더해야한다
	for (int i = 0; i < N * N; i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	printf("%lld", sum);
}