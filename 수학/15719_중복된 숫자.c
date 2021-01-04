#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N;
	int sum = 0, origin_sum = 0;
	scanf("%d", &N);
	int* arr = (int*)malloc(sizeof(int) * N);
	//원래 1~N까지의 수가 들어왔는데 M이 잘못 들어왔다고 가정하고 1~N까지의 합 origin_sum에서 sum을 차감
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