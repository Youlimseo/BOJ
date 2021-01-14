#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	char arr[5][15] = { '\0', };
	scanf("%s %s %s %s %s", arr[0], arr[1], arr[2], arr[3], arr[4]);
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 5; j++)
			if (arr[j][i] != '\0')
				printf("%c", arr[j][i]);
}