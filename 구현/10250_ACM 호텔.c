#include<stdio.h>
int main()
{
	int T;
	int H, W, N;
	long long room;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d %d", &H, &W, &N);
		room = (N % H ? ((N % H) * 100) + (N / H) + 1 : H * 100 + N / H);
		printf("%lld\n", room);
	}
}