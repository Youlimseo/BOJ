#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N;
	scanf("%d", &N);
	pair <int, int> condo[10001];
	for (int i = 0; i < N; i++)
		scanf("%d %d", &condo[i].first, &condo[i].second);
	sort(condo, condo+N);
	//거리순으로 정렬해서 거리가 증가했는데도 가격이 더 싸졌을때 그 콘도를 선정
	int num = 0, money = 100000;
	for (int i = 0; i < N; i++)
	{
		if (money > condo[i].second)
		{
			money = condo[i].second;
			num++;
		}
	}
	printf("%d\n", num);
	return 0;
}