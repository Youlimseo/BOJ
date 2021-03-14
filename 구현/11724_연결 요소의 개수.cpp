#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
bool visited[1001];
vector<int> adj[1001];
queue<int>q;
void bfs(int st)
{
	visited[st] = 1;
	q.push(st);
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		//printf("%d ", now);
		for (int i = 0; i < adj[now].size(); i++)
			if (!visited[adj[now][i]])
			{
				visited[adj[now][i]]=1;
				q.push(adj[now][i]);
			}
	}
}
int main()
{
	int N, M;
	//정점의 개수 N(1 ≤ N ≤ 1, 000), 간선의 개수 M(1 ≤ M ≤ 10, 000)
	scanf("%d %d", &N, &M);
	int a, b;
	while (M--)
	{
		scanf("%d %d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 1; i <= N; i++)
		sort(adj[i].begin(), adj[i].end());
	int answer = 0;
	for (int i = 1; i <= N; i++)
		if (visited[i] == 0)
		{
			bfs(i);
			answer++;
		}
	printf("%d\n", answer);
}