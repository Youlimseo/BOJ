#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b)//��Ŭ���� ȣ����
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
		//������ ����� ��
		for (int i = 0; i < N; i++)
			for (int j = 0; j < i; j++)
			{//������ �������� ���
				if (arr[i] > arr[j])
					sum += gcd(arr[i], arr[j]);
				else
					sum += gcd(arr[j], arr[i]);
			}
		printf("%lld\n", sum);
	}
	return 0;
}