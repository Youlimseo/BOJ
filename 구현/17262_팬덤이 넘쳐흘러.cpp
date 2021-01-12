#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int N;
	vector <int> start;
	vector <int> end;
	scanf("%d", &N);
	int a, b;
	for (int i = 0; i <N; i++)
	{
		scanf("%d %d", &a, &b);
		start.push_back(a);
		end.push_back(b);
	}
	sort(start.begin(), start.end());
	sort(end.begin(), end.end());
	//정렬한후 가장 빨리 떠나는 사람과 가장 늦게 도착한 사람을 빼면됌
	if (start[N - 1] - end[0] < 0)
		printf("0\n");
	else
		printf("%d\n", start[N - 1] - end[0]);
}