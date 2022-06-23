#include <bits/stdc++.h>

using namespace std;

queue<string> fila;
string x[105];

void back(int n, string regra, int ta, int cnt, string result)
{
	if(cnt<ta)
	{
		if(regra[cnt]=='#')
		{
			for(int i=0; i<n; i++)
			{
				string star=result;
				result+=x[i];
				cnt++;
				back(n, regra, ta, cnt, result);
				cnt--;
				result=star;
			}
		}
		else
		{
			cnt++;
			for(int i=0; i<10; i++)
			{
				char x=i + 48;
				string ain=result + x;
				back(n, regra, ta, cnt, ain);
			}
		}
	}
	else
	{
		fila.push(result);
	}
}

int main()
{
	int N;
	while(cin>>N)
	{
		for(int i=0; i<N; i++)
		{
			cin>>x[i];
		}
		int m;
		cin>>m;
		string regras[m];
		for(int i=0; i<m; i++)
		{
			cin>>regras[i];
		}
			for(int j=0; j<m; j++)
			{
				int ta=regras[j].size();
				int cnt=0;
				string texto="";
				back(N, regras[j], ta, cnt, texto);
				cout<<"--"<<endl;
				while(fila.size()!=0)
				{
					cout<<fila.front()<<endl;
					fila.pop();
				}
			}
	}
}
