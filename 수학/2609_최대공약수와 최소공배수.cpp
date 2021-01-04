#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{
	//유클리드 호제법 a와 b의 공약수는 b와 r(a%b)의 공약수
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