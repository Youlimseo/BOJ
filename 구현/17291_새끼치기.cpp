#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int N, bug = 0;
	int memoization[21] = { 0, };
	scanf("%d", &N);
	for (int year = 1; year <= N; year++)
	{
		if (year == 1)
		{
			bug = 1;
			memoization[year + 3] += 1;
		}
		else
		{
			if (year % 2)memoization[year + 3] += bug;
			else memoization[year + 4] += bug;
			bug *= 2;
		}
		bug -= memoization[year];
	}
	printf("%d", bug);
	return 0;
}