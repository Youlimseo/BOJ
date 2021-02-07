#include<iostream>
#include<algorithm>
using namespace std;
long long memo[65][10] = { 0, };
void notdecrease(int num)
{
	for (int j = 0; j < 10; j++)
		memo[1][j] = 1;
	for (int i = 2; i < num + 1; i++)
		if (memo[i][0] == 0)
			for (int j = 0; j < 10; j++)
				for (int k = j; k < 10; k++)
					memo[i][k] += memo[i - 1][j];				
}
long long sum(int num)
{
	long long result = 0;
	for (int j = 0; j < 10; j++)
		result += memo[num][j];
	return result;
}
int main()
{
	int T, n;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		notdecrease(n);
		printf("%lld\n", sum(n));
	}
	
	return 0;
}