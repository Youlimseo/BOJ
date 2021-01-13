#include<iostream>
#include<algorithm>
using namespace std;
int arr[3];
void inarr(int n)
{
	arr[0] = n / 100;
	n = n % 100;
	arr[1] = n / 10;
	n = n % 10;
	arr[2] = n;
}
int is_hansu(int i)
{
	if(i<100)
		return 1;
	inarr(i);
	if ((arr[0] - arr[1]) == (arr[1] - arr[2]))
		return 1;
	return 0;
}
int main()
{
	int N, num=0;
	scanf("%d", &N);
	for (int i = 1; i <=N; i++)
	{
		num += is_hansu(i);
	}
	printf("%d", num);
	return 0;
}