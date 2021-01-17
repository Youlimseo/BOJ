#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int N, sum = 0;
	scanf("%d", &N);
	while (N--)
	{
		int num;
		scanf("%d", &num);
		int arr[1001], visited[1001] = { 1,1,0 };
		for (int i = 0; i <= num; i++)
			arr[i] = i;
		for (int i = 2; i <= sqrt(num); i++)
		{
			if (visited[i])continue;
			for (int j = i + i; j <= num; j += i)
			{
				if (visited[j])continue;
				visited[j] = 1;
			}
		}
		if (!visited[num]) sum++;
	}

	printf("%d", sum);
}