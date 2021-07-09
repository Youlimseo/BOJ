#include<iostream>
#include<algorithm>
using namespace std;
int checkp(char alp)
{
	switch (alp)
	{
	case ' ':
	case 'A':
	case 'D':
	case 'G':
	case 'J':
	case 'M':
	case 'P':
	case 'T':
	case 'W':
		return 1;
		break;
	case'B':
	case'E':
	case'H':
	case'K':
	case'N':
	case'Q':
	case'U':
	case'X':
		return 2;
	case'C':
	case'F':
	case'I':
	case'L':
	case'O':
	case'R':
	case'V':
	case'Y':
		return 3;
	case'S':case'Z':
		return 4;
	}
}
char checkw(char alp)
{
	switch (alp)
	{
	case ' ':
		return '1';
	case 'A':case'B':case'C':
		return '2';
	case 'D':case'E':case'F':
		return '3';
	case 'G':case'H':case'I':
		return '4';
	case 'J':case'K':case'L':
		return '5';
	case 'M':case'N':case'O':
		return '6';
	case 'P':case'Q':case'R':case'S':
		return '7';
	case 'T':case'U':case'V':
		return '8';
	case 'W':case'X':case'Y':case'Z':
		return '9';
	default:
		return'0';
	}
}
int main()
{
	int p, w;
	char arr[1001];
	long long sum = 0;
	scanf("%d %d", &p, &w);
	getchar();
	scanf("%[^\n]s", arr);
	
	for (int i = 0; arr[i] != '\0'; i++)
	{
		sum += checkp(arr[i])*p;
		//공백을 연속으로 누를 때는 기다릴 필요가 없다.
		if(checkw(arr[i])==checkw(arr[i+1])&&(arr[i]!=' '&&arr[i+1]!=' '))
			sum+=w;
	}
	printf("%lld", sum);
	return 0;
}