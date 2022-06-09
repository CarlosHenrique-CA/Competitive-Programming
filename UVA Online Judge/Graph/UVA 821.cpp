#include <bits/stdc++.h>

using namespace std;

vector<int> v[105];
int dist[105];

int bfs(int ini, int fim)
{
	dist[ini]=0;
	queue<int> q;
	q.push(ini);
	while(q.size()!=0)
	{
		int u=q.front();
		q.pop();
		if(dist[fim]!= - 1)
		{
			return dist[fim];
		}
		int ta=v[u].size();
		for(int i=0; i<ta; i++)
		{
			if(dist[v[u][i]]== - 1)
			{
				q.push(v[u][i]);
				dist[v[u][i]]= dist[u] + 1;
			}
		}
	}
	return 0;
}

int main()
{
	int a=0;
	int x, y;
	while(cin>>x>>y && (x + y)>0)
	{
		set<int> sete;
		set<int>::iterator it;
		set<int>::iterator it2;
		sete.insert(x);
		sete.insert(y);
		a++;
		double cnt=0;
		int maior=0;
		v[x].push_back(y);
		while(cin>>x>>y && (x + y)>0)
		{
			sete.insert(x);
			sete.insert(y);
			v[x].push_back(y);
			if(x>maior)
			{
				maior=x;
			}
		}
		for(it=sete.begin(); it!=sete.end(); it++)
		{
			int i=*it;
			for(it2=sete.begin(); it2!=sete.end(); it2++)
			{
				for(int i=1; i<=100; i++)
				{
					dist[i]= - 1;
				}
				int j=*it2;
				int k=bfs(i, j);
					cnt+=k;
			}
		}
		for(int i=1; i<=100; i++)
		{
			v[i].clear();
		}
		cnt=cnt/(sete.size() * (sete.size() - 1));
		cout<<"Case "<<a<<": average length between pages = ";
		cout<<fixed<<setprecision(3)<<cnt;
		cout<<" clicks"<<endl;
	}
}
