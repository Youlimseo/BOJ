#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N;
	scanf("%d", &N);
	int a[51], b[51];
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < N; i++)
		scanf("%d", &b[i]);
	sort(a, a + N);
	sort(b, b + N);
	int sum = 0;
	for (int i = 0; i < N; i++)
		sum += (a[i] * b[N - i - 1]);
	printf("%d", sum);
	return 0;
}