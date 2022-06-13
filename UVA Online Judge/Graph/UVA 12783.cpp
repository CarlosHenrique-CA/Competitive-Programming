#include <bits/stdc++.h>

using namespace std;

vector<int> v[1005];
bool visite[1005];
int menor[1005];
int tempo[1005];
int pai[1005];
int contador=0;
set<pair<int,int>> pontos;

void dfs(int x)
{
	 /* update the visiting status for the node*/
    visite[x]=true;

    /* increase the timer and update the discover and lower time for this node*/
    contador++;
    tempo[x]=contador;
    menor[x]=contador;

    /* this will count the child number of the node */
    int filho = 0;

    for(size_t i=0;i<v[x].size();i++)
    {
        /* access all the adjacent of the node */
        int esse=v[x][i];
        /* checking whether this node is already visited or not */
        if(visite[esse]== false)
        {
            /* increase the child number of the node */
            filho++;
            /* update this child parent and pass this child for next checking */
            pai[esse]=x;
            dfs(esse);
            if(menor[esse] > tempo[x])
            {
				int a=min(x,esse);
				int b=max(x, esse);
                pontos.insert(make_pair(a,b));
            }
            /* update the lowest time to reach the node */
            menor[x] = min(menor[x],menor[esse]);
        }
        /* update the lowest time with this condition :: for visited adjacent*/
        else 
        {
			if(esse != pai[x])
			{
				menor[x]=min(menor[x],tempo[esse]);
			}
		}
    }
}

int main()
{
	int N, M;
	while(cin>>N>>M && N!=0)
	{
		pontos.clear();
		for(int i=0; i<N; i++)
		{
			v[i].clear();
			visite[i]= false;
			pai[i]= - 1;
			tempo[i]= - 1;
			menor[i]= - 1;
		}
		for(int i=0; i<M; i++)
		{
			int save, x;
			cin>>save>>x;
			v[save].push_back(x);
			v[x].push_back(save);	
		}
		contador=0;
		for(int i=1; i<=N; i++)
		{
			if(visite[i]== false)
			{
				dfs(i);
			}
		}
		cout<<pontos.size();
		set<pair<int,int>>::iterator it;
		for(it=pontos.begin(); it!=pontos.end(); it++)
		{
			cout<<" "<<it->first<< " "<<it->second;
		}
		cout<<endl;
	}
}
