#include <bits/stdc++.h>

using namespace std;

int pd[205][71];
int vet[71];
int matriz[71][21];

int back(int maxx, int gasto, int cnt, int m)
{
	if (cnt==m)
	{
		return gasto;
	}
	if(pd[gasto][cnt]!= - 1)
	{
		return pd[gasto][cnt];
	}
	pd[gasto][cnt]=0;
	int a=0;
	for(int i=0; i<vet[cnt]; i++)
	{
		if(gasto + matriz[cnt][i]<=maxx)
		{
			a++;
			pd[gasto][cnt]=max(pd[gasto][cnt], back(maxx, gasto + matriz[cnt][i], cnt + 1, m)); 
		}
	}
	if(a==0)
	{
		return 0;
	}
	return pd[gasto][cnt];
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		for(int i=0; i<200; i++)
		{
			for(int j=0; j<20; j++)
			{
				pd[i][j]= - 1;
			}
		}
		int dim, m;
		cin>>dim>>m;
		for(int i=0; i<m; i++)
		{
			int x;
			cin>>x;
			vet[i]=x;
			for(int j=0; j<x; j++)
			{
				int y;
				cin>>y;
				matriz[i][j]=y;
			}
		}
		int sex=back(dim, 0, 0, m);
		if(sex==0)
		{
			cout<<"no solution"<<endl;
		}
		else
		{
			cout<<sex<<endl;
		}
	}
}




