#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N, a;
	scanf("%d", &N);
	long long sum = 0;
	//��������� ���Ӽ��� ������ �� ���ؾ��Ѵ�
	for (int i = 0; i < N * N; i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	printf("%lld", sum);
}