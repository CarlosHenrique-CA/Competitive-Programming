#include <bits/stdc++.h>

using namespace std;

vector<int> v[10005];
vector<int> vrev[10005];
bool visited[10005];
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
    visited[z]=true;
    for(int i=0; i<v[z].size(); i++)
    {
        if(!visited[v[z][i]])
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
		for(int i=1; i<=n; i++)
		{
			v[i].clear();
			vrev[i].clear();
			visited[i]= false;
		}
		for(int i=0; i<m; i++)
		{
			int x, y;
			cin>>x>>y;
			v[x].push_back(y);
			vrev[y].push_back(x);
		}
		for(int i=1; i<=n; i++)
		{
			if(visited[i]== false)
			{
				dfs(i);
			}
		}
		for(int i=1; i<=n; i++)
		{
			visited[i]=false;
		}
		int cnt=0;
		while(pilha.size()!=0)
		{
			int i=pilha.top();
			pilha.pop();
			if(visited[i]== false)
			{
				cnt++;
				dfs2(i);
			}
		}
		cout<<"Case "<<a + 1<<": "<<cnt<<endl;
		string txt;
		cin.ignore();
		getline(cin, txt);
	}
}
