#include <bits/stdc++.h>

using namespace std;

vector<int> v[105];
bool visite[105];
int menor[105];
int tempo[105];
int pai[105];
int contador=0;
set<int> pontos;

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
            /* condition for articulation node */
            if(pai[x]==-1 && filho>1)
            {
                pontos.insert(x);
            }
            else 
            {
				if(pai[x] != -1 && menor[esse] >= tempo[x])
				{
					pontos.insert(x);
				}
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
	int N;
	while(cin>>N && N!=0)
	{
		string txt;
		cin.ignore();
		pontos.clear();
		for(int i=1; i<=N; i++)
		{
			v[i].clear();
			visite[i]= false;
			pai[i]= - 1;
			tempo[i]= - 1;
			menor[i]= - 1;
		}
		while(getline(cin, txt) && txt!="0")
		{
			int ta=txt.size();
			int a=0, save;
			string palavra="";
			for(int i=0; i<ta; i++)
			{
				if(txt[i]!=' ')
				{
					palavra+=txt[i];
				}
				else
				{
					if(a==0)
					{
						save=stoi(palavra);
						palavra="";
						a++;
					}
					else
					{
						int x=stoi(palavra);
						v[save].push_back(x);
						v[x].push_back(save);
						palavra="";
					}
				}
			}
			int x=stoi(palavra);
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
		cout<<pontos.size()<<endl;
	}
}
