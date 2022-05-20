#include <iostream>
#include <queue>

using namespace std;
	char matriz[51][51];

void floodfill(int i, int j, int n, int m)
{
    matriz[i][j]='T';
    if((i + 1)>0 && matriz[i - 1][j]=='A')
    {
        floodfill(i - 1, j, n, m);
    }
    if(i<(n - 1) && matriz[i + 1][j]=='A')
    {
        floodfill(i + 1, j, n, m);
    }
    if((j + 1)>0 && matriz[i][j - 1]=='A')
    {
        floodfill(i, j - 1, n, m);
    }
    if(j<(m - 1) && matriz[i][j + 1]=='A')
    {
        floodfill(i, j + 1, n, m);
    }
}

int main() 
{
	int n, m;
	int ka=0;
	while(cin>>n>>m && n>0 && m>0)
	{
		queue<int> salvar1, salvar2;
		ka++;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				cin>>matriz[i][j]; 
				if(matriz[i][j]=='T')
				{
					salvar1.push(i);
					salvar2.push(j);
				}
			}
		}
		while(salvar1.size()!=0)
		{
			floodfill(salvar1.front(), salvar2.front(), n, m);
			salvar1.pop();
			salvar2.pop();
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				cout<<matriz[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
