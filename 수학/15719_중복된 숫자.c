#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N;
	int sum = 0, origin_sum = 0;
	scanf("%d", &N);
	int* arr = (int*)malloc(sizeof(int) * N);
	//���� 1~N������ ���� ���Դµ� M�� �߸� ���Դٰ� �����ϰ� 1~N������ �� origin_sum���� sum�� ����
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
		origin_sum += i;
	}
	printf("%d", sum-origin_sum);
	free(arr);
	return 0;
}