#include <bits/stdc++.h>

using namespace std;

multimap<string, string> mapa;
unordered_map<string, pair<int,int>> visited;
vector<string> v[105];
multimap<string, string>::iterator it;
unordered_map<string, pair<int,int>>::iterator it2;
queue<string> save;

void topo(int N)
{
    priority_queue<int, vector<int>, greater<int> > q;
    for(int i=1; i<=N; i++)
    {
        it2=visited.find(v[i][0]);
        if(it2->second.first==0)
        {
            q.push(i);
        }
    }
    while(!q.empty()) 
    {
            int u = q.top();
            q.pop();
            it=mapa.find(v[u][0]);
            while(it!=mapa.end() && it->first==v[u][0])
            {
                it2=visited.find(it->second);
                it2->second.first--;
                if(it2->second.first==0)
                {
                    q.push(it2->second.second);
                }
                it++;
            }
            save.push(v[u][0]);
    }
}

int main()
{
    int caso=0;
    int N;
    while(cin>>N)
    {
        mapa.clear();
        visited.clear();
        caso++;
        for(int u=0; u<N; u++)
        {
            v[u + 1].clear();
            string y;
            cin>>y;
            v[u + 1].push_back(y);
            visited[y]= {0, (u + 1)};
        }
        int n;
        cin>>n;
        for(int u=0; u<n; u++)  
        {
            string x, y;
            cin>>x>>y;
            visited[y].first++;
            mapa.insert({x, y});
        }
        cout<<"Case #"<<caso<<": Dilbert should drink beverages in this order:";
        topo(N);
        while(save.size()!=0)
        {
            cout<<" "<<save.front();
            save.pop();
        }
        cout<<"."<<endl;
        cout<<endl;
        string txt;
        cin.ignore();
        getline(cin, txt);
        
    }
}



