#include <bits/stdc++.h>

using namespace std;

vector<int> G[205];
int color[205];
int cor[3];

bool pinta(int src, int V)
{
    color[src] = 0;
    queue <int> q;
    q.push(src);
    cor[0]++;
    int haha=0;
    while (!q.empty()) 
    {
		int u = q.front();
		q.pop();
		for (int j = 0; j < (int)G[u].size(); j++) 
		{
			int v = G[u][j];
			if (color[v] == - 1) 
			{
				color[v] = 1 - color[u];
				cor[color[v]]++;
				q.push(v);
			} 
			else if (color[v] == color[u]) 
			{
				haha=1;
			}
		}
    }
 
    // If we reach here, then all adjacent 
    // vertices can be colored with alternate color
    if(haha==0)
    {
    return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    for(int a=0; a<n; a++)
    {
        cin.ignore();
        string txt;
        getline(cin, txt);
        int N;
        cin>>N;
        for(int i=1; i<=N; i++)
        {
            G[i].clear();
            color[i]= - 1;
        }
        for(int i=1; i<=N; i++)
        {
            int m;
            cin>>m;
            for(int j=0; j<m; j++)
            {
                int x;
                cin>>x;
                if(x<=N)
                {
                    G[x].push_back(i);
                    G[i].push_back(x);
                }
            }
        }
        int total=0;
        for(int i=1; i<=N; i++)
        {
            if(color[i]== - 1)
            {
                cor[0]= 0;
                cor[1]=0;
                bool ain=pinta(i, N);
                if(ain==true)
                {
                    total+=max(1, max(cor[0], cor[1]));
                }
                
            }
        }
        cout<<total<<endl;
    }
}
