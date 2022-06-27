
#include <bits/stdc++.h>

using namespace std;

int pai[200005];
int find(int u)
{
	if(pai[u]==u)
	{
		return u;
	}
	return find(pai[u]);
}
int main()
{
	int n;
	int N;
	cin>>N;
	for(int aa=0; aa<N; aa++)
	{
		string txt;
		cin.ignore();
		getline(cin, txt);
		cin>>n;
			vector<pair<double, pair<int, int>>> v;
			for(int i=0; i<n; i++)
			{
				pai[i]=i;
			}
			double cnt=0;
			vector<pair<double,double>> vetor;
			for(int i=0; i<n; i++)
			{
				double x, y;
				cin>>x>>y;
				vetor.push_back({x,y});
				//v.push_back({z,{x, y}});
			}
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					if(j!=i)
					{
						double x=vetor[i].first;
						double y=vetor[i].second;
						double xis=vetor[j].first;
						double yis=vetor[j].second;
						double z=sqrt(pow((xis - x), 2) + pow((yis - y), 2));
						v.push_back({z,{i, j}});
					}
				}
			}
			sort(v.begin(), v.end());
			for(int i=0; i<v.size(); i++)
			{
				int y=v[i].second.second;
				int x=v[i].second.first;
				int uu=find(y);
				int u=find(x);
				if(u!=uu)
				{
					pai[uu]=u;
					cnt+=v[i].first;
				}
			}
			cout<<fixed<<setprecision(2)<<cnt<<endl;
			if(aa!= N - 1)
			{
				cout<<endl;
			}
	}
}
