#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int main()
{
	int a, b, max;
	scanf("%d %d", &a, &b);
	if (a < b)
		swap(a, b);
	max = gcd(a, b);
	printf("%d %d", max, a * b / max);
	return 0;
}