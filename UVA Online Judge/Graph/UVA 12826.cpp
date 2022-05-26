#include <bits/stdc++.h>

using namespace std;

int matriz[9][9];

void bfs(int ini, int ini2, int fim, int fim2)
{
	matriz[ini][ini2]= 0;
	queue<int> q, qq;
	q.push(ini);
	int n=8, m=8;
	qq.push(ini2);
	while(q.size()!=0)
	{
		int u=q.front();
		int uu=qq.front();
		q.pop();
		qq.pop();
		if(matriz[fim][fim2]!= - 1)
		{
			break;
		}
		if((u + 1)>0 && matriz[u - 1][uu]==- 1)
		{
			q.push(u - 1);
			qq.push(uu);
			matriz[u - 1][uu]= matriz[u][uu] + 1;
		}
		if(u<(n - 1) && matriz[u + 1][uu]== - 1)
		{
			q.push(u + 1);
			qq.push(uu);
			matriz[u + 1][uu]= matriz[u][uu] + 1;
		}
		if((uu + 1)>0 && matriz[u][uu - 1]== - 1)
		{
			q.push(u);
			qq.push(uu - 1);
			matriz[u][uu - 1]=matriz[u][uu] + 1;
		}
		if(uu<(m - 1) && matriz[u][uu + 1]== - 1)
		{
			q.push(u);
			qq.push(uu + 1);
			matriz[u][uu + 1]=matriz[u][uu] + 1;
		}
		if(uu<(m - 1) && u<(n - 1) && matriz[u + 1][uu + 1]== - 1)
		{
			q.push(u + 1);
			qq.push(uu + 1);
			matriz[u + 1][uu + 1]=matriz[u][uu] + 1;
			// DIAGONAL BAIXO DIREITA
		}
		
		if(uu>0 && u>0 && matriz[u - 1][uu - 1]== - 1)
		{
			q.push(u - 1);
			qq.push(uu - 1);
			matriz[u - 1][uu - 1]=matriz[u][uu] + 1;
			//DIAGONAL CIMA ESQUERDA
		}
		
		if(uu<(m - 1) && u>0 && matriz[u - 1][uu + 1]==- 1)
		{
			q.push(u - 1);
			qq.push(uu + 1);
			matriz[u - 1][uu + 1]=matriz[u][uu] + 1;
			//DIAGONAL CIMA ESQUERDA
		}
		
		if(uu>0 && u<(n - 1) && matriz[u + 1][uu - 1]== - 1)
		{
			q.push(u + 1);
			qq.push(uu - 1);
			matriz[u + 1][uu - 1]=matriz[u][uu] + 1;
			// DIAGONAL BAIXO ESQUERDA
		}
	}
}

int main()
{
	int ini, ini2, fim, fim2, block, block2;
	int i=0;
	while(cin>>ini>>ini2>>fim>>fim2>>block>>block2)
	{
		i++;
		for(int i=0; i<8; i++)
		{
			for(int j=0; j<8; j++)
			{
				matriz[i][j]= - 1;
			}
		}
		ini--;
		ini2--;
		fim--;
		fim2--;
		block--;
		block2--;
		matriz[block][block2]= - 2;
		bfs(ini, ini2, fim, fim2);
		cout<<"Case "<<i<<": "<<matriz[fim][fim2]<<endl;
	}
}
