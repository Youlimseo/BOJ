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
	//�Ÿ������� �����ؼ� �Ÿ��� �����ߴµ��� ������ �� �������� �� �ܵ��� ����
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