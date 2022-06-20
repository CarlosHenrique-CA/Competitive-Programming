#include <bits/stdc++.h>

using namespace std;

map<string, pair<int,int>> dist;
map<string, pair<int,int>>::iterator it2;
multimap<string, pair<string, int>> mapa;
multimap<string, pair<string, int>>::iterator it;

void bfs(int je, int n)
{	
	it2=dist.find("Calgary");
	it2->second.first=0;
	for(int i=0; i<n - 1; i++)
	{
		for(it=mapa.begin(); it!=mapa.end(); it++)
		{
			it2=dist.find(it->first);
			int salvar=it2->second.first;
			int sayve=it2->second.second;
				if(it->second.first=="Fredericton")
				{
					it2=dist.find(it->second.first);
					int custoviagem=it->second.second;
					if((salvar!=999999 && sayve<=je))
					{
						it2->second.first=min(it2->second.first, custoviagem + salvar);
						it2->second.second=sayve + 1;
					}
				}
				else
				{
					it2=dist.find(it->second.first);
					int custoviagem=it->second.second;
					if((salvar!=999999  && sayve<je))
					{
						it2->second.first=min(it2->second.first, custoviagem + salvar);
						it2->second.second=sayve + 1;
					}
				}
		}
	}
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
		if(i!=0)
		{
			cout<<endl;
		}
		dist.clear();
		mapa.clear();
		int N;
		cin>>N;
		for(int j=0; j<N; j++)
		{
			string pe;
			cin>>pe;
			dist[pe].first= - 1;
			dist[pe].second= 0;
		}
		int uy=N;
		cin>>N;
		for(int j=0; j<N; j++)
		{
			string x, y;
			int f;
			cin>>x>>y>>f;
			mapa.insert({x, {y, f}});
		}
		cin>>N;
		cout<<"Scenario #"<<i + 1<<endl;
		for(int j=0; j<N; j++)
		{
			int q;
			cin>>q;
			for(it2=dist.begin(); it2!=dist.end(); it2++)
			{
				it2->second.first= 999999;
				it2->second.second= 0;
			}
			bfs(q, uy);
			it2=dist.find("Fredericton");
			if(it2->second.first== 999999 )
			{
				cout<<"No satisfactory flights"<<endl;
			}
			else
			{
				cout<<"Total cost of flight(s) is $"<<it2->second.first<<endl;
			}
		}
	}
}

