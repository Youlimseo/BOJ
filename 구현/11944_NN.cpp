#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	char N[2021];
	int M;
	//������ �ݺ�������ؾ��ϹǷ� 
	scanf("%s %d", N, &M);
	int len = strlen(N);
	int num = atoi(N);
	string result;
	if (len * num > M)
	{
		for (int i = 0; i < M; i++)
			result += N[i % len];
	}
	else
	{
		while (num--)
			result += N;
	}
	printf("%s\n", result.c_str());
	return 0;
}