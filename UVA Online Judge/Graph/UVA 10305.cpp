#include <bits/stdc++.h>

using namespace std;

multimap<int, int> mapa;
map<int, int> visited;
map<int, int>::iterator it2;
map<int, int>::iterator it3;
queue<int> pilha;

void dfs(int z)
{
    multimap<int, int>::iterator it;
    it2=visited.find(z);
    it2->second=1;
    it=mapa.find(z);
    while(it!=mapa.end() && it->first==z)
    {
        it2=visited.find(it->second);
        if(it2->second==0)
        {
            dfs(it->second);
        }
        it++;
    }
    if(z!=0)
    {
    pilha.push(z);
    }
}

int main() 
{
    int N, M;
    while(cin>>N>>M && (N + M)!=0)
    {
        visited.clear();
        mapa.clear();
        for(int i=1; i<=N; i++)
        {
            visited[i]=0;
        }
        for(int i=0; i<M; i++)
        {
            int x, y;
            cin>>x>>y;
            mapa.insert({y, x});
        }
        for(it3=visited.begin(); it3!=visited.end(); it3++)
        {
            if(it3->second==0)
            {
                cout<<it3->first<<endl;
                dfs(it3->first);
            }
        }
        while(pilha.size()!=0)
        {
            if(pilha.size()==1)
            {
                cout<<pilha.front()<<endl;
            }
            else
            {
                cout<<pilha.front()<<" ";
            }
            pilha.pop();
        }
    }
}


