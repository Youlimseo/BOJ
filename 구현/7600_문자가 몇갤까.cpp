#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	char arr[251];
	while (1)
	{
		int alphabet[26] = { 0, };
		int sum = 0;
		scanf("%[^\n]s", arr);
		if (arr[0] == '#')//종료조건
			break;
		getchar();
		for (int i = 0; arr[i] != '\0'; i++)
		{
			if (arr[i] >= 'A' && arr[i] <= 'Z')//대문자
				alphabet[arr[i] - 'A'] = 1;
			else if (arr[i] >= 'a' && arr[i] <= 'z')//소문자
				alphabet[arr[i] - 'a'] = 1;
		}
		for (int i = 0; i < 26; i++)
			sum += alphabet[i];
		printf("%d\n", sum);
	} 
	return 0;
}