#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int r, c;
int cnt = 0;
void Zcount(int n, int x, int y)
{
	if (x == r && y == c)
	{
		printf("%d", cnt);
		return;
	}
	if (n == 1)
	{
		cnt++;
		return;
	}
	if (!(r >= x && r < x + n && c >= y && c < y + n))
	{
		cnt += n * n;
		return;
	}
	Zcount(n / 2, x, y);
	Zcount(n / 2, x, y + n / 2);
	Zcount(n / 2, x + n / 2, y);
	Zcount(n / 2, x + n / 2, y + n / 2);
}
int main()
{
	int N;
	scanf("%d %d %d", &N, &r, &c);
	Zcount(pow(2, N), 0, 0);
}