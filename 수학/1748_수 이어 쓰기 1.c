#include<stdio.h>

int main()
{
	int i, j;
	int N, power;
	int sum = 0;
	scanf("%d", &N);
	//�ڸ��� �Ǻ� 10���� ������ ���� 10���� ������ ���ڸ������ ����
	for (i = 1; i <= N; i++)
	{
		for (power = 1, j = i; j > 9; power++)
			j /= 10;
		sum += power;
	}
	printf("%d", sum);
	return 0;
}