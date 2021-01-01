#include<stdio.h>

int main()
{
	int N, sum = 0;
	char arr[100];
	scanf("%d", &N);
	scanf("%s", arr, sizeof(arr));
	for (int i = 0; i < N; i++)
		sum += arr[i] - '0';
	printf("%d", sum);
}