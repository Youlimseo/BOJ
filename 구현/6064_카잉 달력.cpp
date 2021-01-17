#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int M, N, x, y;
		scanf("%d %d %d %d", &M, &N, &x, &y);
		int i; x--; y--;
		for (i = x; i < (M * N); i += M)
			if (i % N == y)
			{
				printf("%d\n", i + 1);
				break;
			}

		if (i % N != y)
			printf("-1\n");
	}
}