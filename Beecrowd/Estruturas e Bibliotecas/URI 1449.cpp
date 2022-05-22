#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
	int N;
	cin>>N;
	int a,b;
	for(int i=0; i<N; i++)
	{
		map<string, string>mapa;
		cin>>a>>b;
		for(int j=0; j<a; j++)
		{
			if(j==0)
			{
				cin.ignore();
			}
			string japa, port;
			getline(cin, japa);
			getline(cin, port);
			mapa[japa]=port;	
		}
		map<string, string>:: iterator it; 
		for(int j=0; j<b; j++)
		{
			string texto;
			getline(cin, texto);
			int ta=texto.size();
			string palavra="";
			for(int jj=0; jj<ta; jj++)
			{
				if(texto[jj]==' ')
				{
					it=mapa.find(palavra);
					if(it!=mapa.end())
					{
						cout<<it->second<<' ';
					}
					else
					{
						cout<<palavra<<' ';
					}
					palavra="";
				}
				else
				{
					palavra+=texto[jj];
				}
			}
			it=mapa.find(palavra);
			if(it!=mapa.end())
			{
				cout<<it->second<<endl;
			}
			else
			{
				cout<<palavra<<endl;
			}
			palavra="";
		}
		cout<<endl;
	}
}
