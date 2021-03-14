#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
bool visited1[1001];
vector<int> adj[1001];
void dfs(int now)
{
	visited1[now] = 1;
	printf("%d ", now);
	for (int i = 0; i < adj[now].size(); i++)
		if (!visited1[adj[now][i]])
			dfs(adj[now][i]);
}
bool visited2[1001];
queue<int>q;
void bfs(int st)
{
	visited2[st] = 1;
	q.push(st);
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		printf("%d ", now);
		for (int i = 0; i < adj[now].size(); i++)
		{
			if (!visited2[adj[now][i]])
			{
				visited2[adj[now][i]]=1;
				q.push(adj[now][i]);
			}
		}
	}
}
int main()
{
	int N, M, V;
	//정점의 개수 N(1 ≤ N ≤ 1, 000), 간선의 개수 M(1 ≤ M ≤ 10, 000), 탐색을 시작할 정점의 번호 V
	scanf("%d %d %d", &N, &M, &V);
	int a, b;
	while (M--)
	{
		scanf("%d %d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 1; i < N+1; i++)
		sort(adj[i].begin(), adj[i].end());
	dfs(V);
	printf("\n");
	bfs(V);
}