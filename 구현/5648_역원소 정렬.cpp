#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
	int N;
	char num[13];
	vector <pair<int, string>> v;
	scanf("%d", &N);
	for (int i = 0; i <N; i++)
	{
		getchar();
		scanf("%s", num);
		//뒷자리가 0부터 시작하는 경우
		string here = num;
		while (here.back() == '0')
			here.pop_back();
		reverse(here.begin(), here.end());
		v.push_back({ here.length(),here });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++)
		printf("%s\n", v[i].second.c_str());
}