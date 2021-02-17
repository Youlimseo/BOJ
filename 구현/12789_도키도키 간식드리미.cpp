#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
	int N, num, order = 1, retry = 0;
	scanf("%d", &N);
	stack <int> st;
	while (N--)
	{
		scanf("%d", &num);
		if (num == order)
			order++;
		else
		{
			while (!st.empty()&&st.top() == order)
			{
				st.pop(); order++; retry--;
			}
			st.push(num); retry++;
		}
	}
	while (retry--)
	{
		if (st.top() == order)
		{
			st.pop(); order++;
		}
	}
	if (st.empty())
		printf("Nice");
	else
		printf("Sad");
	
	return 0;
}