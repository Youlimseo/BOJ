#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	char s[100001];
	char t[100001];
	while (scanf("%s %s", s, t) != EOF)
	{
		int cnt = 0;
		for (int i = 0; i < strlen(t); i++) {
			if (cnt == strlen(s) || s[cnt] != t[i]) continue;
			cnt++;
		}
		if (cnt == strlen(s))
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}