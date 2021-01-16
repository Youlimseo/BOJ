#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N, K;
	scanf("%d", &K);
	int arr[50];
	for (int i = 0; i < K; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + K);
	printf("%d", arr[0]*arr[K-1]);
}