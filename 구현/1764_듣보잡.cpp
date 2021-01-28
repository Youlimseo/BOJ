#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string arrN[500000], arrnum[5000000];
string arrM;
int num = 0;
int FindName(int left, int right)
{
	while (right >= left)
	{
		int mid = (left + right) / 2;
		if (arrN[mid] == arrM)
		{
			arrnum[num] = arrM;
			return 1;
		}
		if (arrN[mid] < arrM) left = mid + 1;
		if (arrN[mid] > arrM) right = mid - 1;
	}
		return 0;
}
int main()
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin>> arrN[i];
	sort(arrN, arrN + N);
	
	for (int i = 0; i < M; i++)
	{
		cin>> arrM;
		num += FindName(0, N);
	}
	cout << num << "\n";
	sort(arrnum, arrnum + num);
	for (int i = 0; i < num; i++)
		cout << arrnum[i] << "\n";
}