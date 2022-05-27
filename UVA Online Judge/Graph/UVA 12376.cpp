#include <bits/stdc++.h>

using namespace std;

int valor[105];
vector<int> v[105];
int visited[105];
int cnt=0;

int bfs(int x, int n)
{
	queue<int> q;
	q.push(x);
	int ult;
	while(q.size()!=0)
	{
		int maior=0, save= - 2;
		int u=q.front();
		q.pop();
		visited[u]=0;
		cnt+=valor[u];
		for(int i=0;i<v[u].size();i++)
		{
			if(visited[v[u][i]]== - 1 && valor[v[u][i]]>maior)
			{
				maior=valor[v[u][i]];
				save=v[u][i];;
			}
		}
		if(save!= - 2)
		{
			q.push(save);
		}
		ult=u;
	}
	return ult;
}

int main()
{
	int N;
	cin>>N;
	for(int a=0;a<N;a++)
	{
		cin.ignore();
		string txt;
		getline(cin, txt);
		int n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			v[i].clear();
			visited[i]= - 1;
			cin>>valor[i];
		}
		for(int i=0;i<m;i++)
		{
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
		}
		int salvar, maior=0;
		cnt=0;
		// BFS AQUI,ZERANDOA CIMA
		int u=bfs(0, n);
		if(cnt>maior)
		{
			maior=cnt;
			salvar=u;
		}
		cout<<"Case "<<a + 1<<": "<<maior<<" "<<salvar<<endl;
	}
}
