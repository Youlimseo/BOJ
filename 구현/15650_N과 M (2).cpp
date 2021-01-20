#include<iostream>
#include<algorithm>
using namespace std;
int arr[10]; int check[10];
void go(int n, int N,int M, int location)
{
	if (M == location)
	{
		for (int i = 0; i < M; i++)
			printf("%d ", arr[i]);
		printf("\n");
		return;
	}
	for (int i = n; i <= N; i++)
		if (!check[i])
		{
			check[i] = 1; arr[location] = i;
			go(i+1, N, M, location + 1);
			check[i] = 0; arr[location] = 0;
		}
	return;
}
int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	go(1,N, M, 0);
}