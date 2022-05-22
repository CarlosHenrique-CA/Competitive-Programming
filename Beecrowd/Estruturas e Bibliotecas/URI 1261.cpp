#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
	map<string, int>mapa;
	int M, N;
	cin>>M>>N;
	string x;
	int y;
	for(int i=0; i<M; i++)
	{
		cin >> x >> y; 
		mapa[x] = y; 
	}
	for(int i=0; i<N; i++)
	{
		string texto;
		int pen=0;
		string palavra="";
		int total=0;
		total=0;
		map<string, int>:: iterator it;
		while(texto!=".")
		{
			pen=0;
			getline(cin, texto);
			int tamanho;
			tamanho=texto.size();
			palavra="";
			while(pen!=tamanho)
			{
			     it=mapa.find(palavra);
			     if(texto[pen]==' ')
			     {
    		        if(it!=mapa.end())
			        {
			        total+=it->second;
			        }
			        palavra="";
			     }
			     else
			     {
				    palavra+=texto[pen];
			     }
			   	pen++;
			}
			it=mapa.find(palavra);
			if(it!=mapa.end())
			{
			total+=it->second;
			}
		}
		cout<<total<<endl;
	}

}
