#include<iostream>
#include<algorithm>
using namespace std;
int N, M;
int mem_num[10] = { 0, };
int channelcheck(int channel)
{
	if (channel == 0)
		if (mem_num[0] == 1)
			return 0;
		else
			return 1;
			
	int check = 0;
	while (channel > 0)
		if (mem_num[channel % 10] == 1)
			return 0;
		else
		{
			check++;
			channel /= 10;
		}
	return check;
}
int main()
{
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++)
	{
		int num;
		scanf("%d", &num);
		mem_num[num] = 1;
	}

	int ans = abs(N - 100);//+,-만 눌러서 가는 값
	for (int i = 0; i < 1000001; i++)
		if (int count=channelcheck(i))
		{
			int num = abs(N - i)+count;
			ans = min(ans, num);
		}

	printf("%d", ans);
	return 0;
}