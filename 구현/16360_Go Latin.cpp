#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int N;
	scanf("%d", &N);
	while (N--)
	{
		char arr[35] = { '\0' ,};
		scanf("%s", arr,21);
		int len = strlen(arr) - 1;
		if (arr[len] == 'a' || arr[len] == 'o' || arr[len] == 'u')
			arr[len + 1] = 's';
		else if (arr[len] == 'i')
		{
			arr[len + 1] = 'o';
			arr[len + 2] = 's';
		}
		else if (arr[len] == 'l' || arr[len] == 'r' || arr[len] == 'v')
		{
			arr[len + 1] = 'e';
			arr[len + 2] = 's';
		}
		else if (arr[len] == 't' || arr[len] == 'w')
		{
			arr[len + 1] = 'a';
			arr[len + 2] = 's';
		}
		else if (arr[len] == 'y')
		{
			arr[len] = 'i';
			arr[len + 1] = 'o';
			arr[len + 2] = 's';
		}
		else if (arr[len] == 'n')
		{
			arr[len] = 'a';
			arr[len + 1] = 'n';
			arr[len + 2] = 'e';
			arr[len + 3] = 's';
		}
		else if (arr[len - 1] == 'n' && arr[len] == 'e')
		{
			arr[len - 1] = 'a';
			arr[len] = 'n';
			arr[len + 1] = 'e';
			arr[len + 2] = 's';
		}
		else
		{
			arr[len + 1] = 'u';
			arr[len + 2] = 's';
		}
		printf("%s\n", arr);

	}
	return 0;
}