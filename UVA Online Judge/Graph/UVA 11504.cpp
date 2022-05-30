#include <bits/stdc++.h>

using namespace std;

vector<int> v[100005];
bool visited[100005];
bool visited2[100005];
stack<int> pilha;

void dfs(int z)
{
    visited[z]=true;
    for(int i=0; i<v[z].size(); i++)
    {
        if(!visited[v[z][i]])
        {
            dfs(v[z][i]);
        }
    }
    pilha.push(z);
}

void dfs2(int z)
{
    visited2[z]=true;
    for(int i=0; i<v[z].size(); i++)
    {
        if(!visited2[v[z][i]])
        {
            dfs2(v[z][i]);
        }
    }
}

int main()
{
	int N;
	cin>>N;
	for(int a=0; a<N; a++)
	{
		int n, m;
		cin>>n>>m;
		for(int i=0; i<m; i++)
		{
			int x, y;
			cin>>x>>y;
			v[x].push_back(y);
		}
		for(int i=1; i<=n; i++)
		{
			if(!visited[i])
			{
				dfs(i);
			}
		}
		int cont=0;
		while(pilha.size()!=0)
		{
			if(visited2[pilha.top()]==false)
			{
				dfs2(pilha.top());
				cont++;
			}
			pilha.pop();
		}
		for(int i=1; i<=n; i++)
		{
			visited2[i]=false;
			visited[i]=false;
			v[i].clear();
		}
		cout<<cont<<endl;
	}
}
