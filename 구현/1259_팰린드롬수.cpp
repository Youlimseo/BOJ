#include<iostream>
#include<algorithm>
#include <cstring>
using namespace std;
int main()
{
	char arr[10];
	while (1)
	{
		bool flag = true;
		scanf("%s", arr);
		if (arr[0] == '0')
			break;
		int len = strlen(arr) - 1;
		for (int i = 0; i < len + 1 / 2; i++)
			if (arr[i] != arr[len - i])
			{
				printf("no\n");
				flag = false;
				break;
			}
		if (flag)
			printf("yes\n");
	}

	return 0;
}