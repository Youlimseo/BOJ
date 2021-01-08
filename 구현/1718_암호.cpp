#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	char arr[30001];
	char key[30001];
	scanf("%[^\n]s", arr);
	getchar();
	scanf("%[^\n]s", key);
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] != ' ')
		{
			arr[i] -= (key[i % strlen(key)] - 'a');
			arr[i]--;
			arr[i] += (arr[i] < 'a' ? 'z' - 'a' + 1 : 0);
		}
	}
	printf("%s", arr);
	return 0;
}