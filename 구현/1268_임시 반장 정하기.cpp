#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int S;
	scanf("%d",&S);
	int arr[1000][5];
	for (int i = 0; i < S; i++)
		for(int j=0;j<5;j++)
			scanf("%d", &arr[i][j]);
	int max = -1;
	int ans = -1;
	int student[1000] = { 0, };
	for (int i = 0; i < S; i++)
	{
		int sum = 0;
		for (int j = 0; j < 5; j++)
			for (int k = 0; k < S; k++)
				if (arr[i][j] == arr[k][j])
					student[k]++;

		for (int k = 0; k < S; k++)
		{
			if (student[k])
				sum++;
			student[k] = 0;
		}
		if (sum > max)
		{
			max=sum;
			ans = i+1;
		}
	}
	printf("%d", ans);
}