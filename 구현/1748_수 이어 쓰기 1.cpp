#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;


int main()
{
	int N;
	scanf("%d", &N);
	long long sum =0;

	//���� �ڸ��� ���� ���� ����: N-1+1
	//���� �ڸ��� ���� ���� ����: N-10+1
	//���� �ڸ��� ���� ���� ����: N-100+1

	//15=15+6=21

	for (int i = 1; i <= N; i *= 10)
		sum += N + 1 - i;

	printf("%lld", sum);
	return 0;
}