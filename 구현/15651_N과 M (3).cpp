#include<iostream>
#include<algorithm>
using namespace std;
int arr[10]; int check[10];
void go(int N, int M, int location)
{
	if (M == location)
	{
		for (int i = 0; i < M; i++)
			printf("%d ", arr[i]);
		printf("\n");
		return;
	}
	for (int i = 1; i <= N; i++)
	{
		arr[location] = i;
		go(N, M, location + 1);
		arr[location] = 0;
	}
	return;
}
int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	go(N, M, 0);
}