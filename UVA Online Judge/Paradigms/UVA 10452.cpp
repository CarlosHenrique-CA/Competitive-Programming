#include <bits/stdc++.h>

using namespace std;


char matriz[10][10];
char vetor[7];
int cnt=0;
queue<string> fila;
void bfs(int ini, int ini2, int fim, int fim2, int n, int m)
{
	if(cnt==7)
	{
		
	}
		else
		{
		if(ini2>0 && matriz[ini][ini2 - 1]==vetor[cnt])
		{
			cnt++;
			fila.push("left");
			bfs(ini, ini2 - 1, fim, fim2, n, m);
		}
		if(ini2<(m - 1) && matriz[ini][ini2 + 1]==vetor[cnt])
		{
			cnt++;
			fila.push("right");
			bfs(ini, ini2 + 1, fim, fim2, n, m);
		}
		if(ini>0 && matriz[ini - 1][ini2]==vetor[cnt])
		{
			cnt++;
			fila.push("forth");
			bfs(ini - 1, ini2, fim, fim2, n, m);
		}
}
}

int main()
{
	int N;
	cin>>N;
	for(int i=0; i<N; i++)
	{
		cnt=0;
		vetor[0]='I';
		vetor[1]='E';
		vetor[2]='H';
		vetor[3]='O';
		vetor[4]='V';
		vetor[5]='A';
		vetor[6]='#';
		int n, m;
		cin>>n>>m;
		int fim, fim2, ini, ini2;
		for(int j=0; j<n; j++)
		{
			string x;
			cin>>x;
			for(int a=0; a<m; a++)
			{
				matriz[j][a]=x[a];
				if(matriz[j][a]=='@')
				{
					ini=j;
					ini2=a;
				}
				if(matriz[j][a]=='#')
				{
					fim=j;
					fim2=a;
				}
			}
		}
		bfs(ini, ini2, fim, fim2, n, m);
		cout<<fila.front();
		fila.pop();
		while(fila.size()!=0)
		{
			cout<<" "<<fila.front();
			fila.pop();
		}
		cout<<endl;
	}
}
