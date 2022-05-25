#include <bits/stdc++.h> 

using namespace std;

vector<int> v[205];
int cnt=0;
int visited[205];

void dfs(int x)
{
    queue<int> q;
    q.push(x);
    while(q.size()!=0)
    {
    	int u = q.front();
        q.pop();
        for (int i = 0; i < v[u].size(); ++i)
        {
            int a = v[u][i];
            if (visited[a] == visited[u])
            {
                cnt++;
                break;
            }
            else if (visited[a] == - 1)
            {
                visited[a] = 1 + visited[u]; 
                q.push(a);
            }
        }
    }
}

int main()
{
	int N;
	while(cin>>N && N!=0)
	{
		for(int i=0; i<=N; i++)
		{
			v[i].clear();
			visited[i]= - 1;
		}
		cnt=1;
		int n;
		cin>>n;
		for(int i=0; i<n; i++)
		{
			int x, y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		visited[0]=0;
		dfs(0);
		if(cnt==1)
		{
			cout<<"BICOLORABLE."<<endl;
		}
		else
		{
			cout<<"NOT BICOLORABLE."<<endl;
		}
	}
}


