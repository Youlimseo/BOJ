#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N, S, ans = 0;
	int num[21];

	scanf("%d %d ", &N, &S);
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);

	for (int i = 1; i < (1 << N); i++) //000,001,010.. ó�� 2�� n������ �κм��� üũ
	{
		int sum = 0;
		for (int j = 0; j < N; j++)
			if ((1 << j) & i) //�ڸ����� üũ -> 010�̸� �ι�°�ڸ� ���ڸ�
				sum += num[j];

		if (sum == S)
			ans++;
	}
	printf("%d", ans);
	return 0;
}