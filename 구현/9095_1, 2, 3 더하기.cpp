#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int T,n;
	int memo[11] = { 0,1,2,4, };
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		for (int i = 4; i < n + 1; i++)
			memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3];
		printf("%d\n", memo[n]);
	}
	
	return 0;
}