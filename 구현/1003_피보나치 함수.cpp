#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int T,n;
    pair<int, int> memo[41];
    memo[0] = { 1,0 }; memo[1] = { 0,1 };
	scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (int i = 2; i < n + 1; i++)
        {
            memo[i].first = memo[i - 1].first + memo[i - 2].first;
            memo[i].second = memo[i - 1].second + memo[i - 2].second;
        }
        printf("%d %d\n", memo[n].first, memo[n].second);
       
    }
	return 0;
}