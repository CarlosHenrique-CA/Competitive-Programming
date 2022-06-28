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
		cin>>n;
		int m;
		cin>>m;
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
			double cnt2=0;
			int mama=1;
			for(int i=0; i<v.size(); i++)
			{
				int y=v[i].second.second;
				int x=v[i].second.first;
				int uu=find(y);
				int u=find(x);
				if(u!=uu)
				{
				    if(v[i].first<=m)
				    {
				        cnt+=v[i].first;
				    }
				    else
				    {
				        mama++;
				        cnt2+=v[i].first;
				    }
					pai[uu]=u;
				}
			}
			int ain=cnt;
			int ain2=cnt2;
			if(cnt2>(ain2 + 0.5))
			{
			    cnt2= cnt2 + 1;
			}
			if(cnt>(ain + 0.5))
			{
			    cnt= cnt + 1;
			}
			cout<<"Case #"<<aa + 1<<": "<<mama<<" "<<int(cnt)<<" "<<int(cnt2)<<endl;
	}
}
