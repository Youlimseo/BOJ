#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;


int main()
{
	int N;
	scanf("%d", &N);
	long long sum =0;

	//일의 자리를 가진 수의 갯수: N-1+1
	//십의 자리를 가진 수의 갯수: N-10+1
	//백의 자리를 가진 수의 갯수: N-100+1

	//15=15+6=21

	for (int i = 1; i <= N; i *= 10)
		sum += N + 1 - i;

	printf("%lld", sum);
	return 0;
}