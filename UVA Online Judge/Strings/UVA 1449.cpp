#include <bits/stdc++.h>

using namespace std;


int imp;

void prefix(string substr, int m, int aux[])
{
	int i, j;
	aux[0] = 0; // aux[0] é sempre 0
	j = 0; // tamanho do maior prefixo que é sufixo
	i = 1;

	while( i < m )
	{
		if(substr[i] == substr[j])
		{
			j = j + 1;
			aux[i] = j;
			i = i + 1;
		}
		else
		{
			if(j != 0)
			{
				j = aux[j - 1];
			}
			else
			{
				aux[i] = 0;
				i = i + 1;
			}
		}
	}
}

void kmp(string str, string substr, int n, int m)
{
	int idxsubstr, idxstr;
	idxsubstr = idxstr = 0;
	int aux[m];
	prefix(substr, m, aux);
	while(idxstr < n)
	{
		if(substr[idxsubstr] == str[idxstr])
		{
			idxsubstr++;
			idxstr++;
		}
		if(idxsubstr == m)
		{
			//"padrao encontrado na pos (idx_str - idx_substr)"
			imp++;
			idxsubstr = aux[idxsubstr - 1];
		}
		else
		{ 
			if(idxstr<n && substr[idxsubstr]!=str[idxstr])
			{
				if(idxsubstr!=0)
				{
					idxsubstr = aux[idxsubstr - 1];
				}
				else
				{
					idxstr++;
				}
			}
		}
	}

}

int main()
{
	int m;
	while(cin>>m && m!=0)
	{
		string x[m];
		for(int i=0; i<m; i++)
		{
			cin>>x[i];
		}
		vector<pair<int, string>> v;
		string y;
		cin>>y;
		for(int i=0; i<m; i++)
		{
			imp=0;
			string a=x[i];
			kmp(y, a, y.size(), a.size());
			v.push_back({imp, x[i]});
		}
		int maior= - 1;
		for(int i=0; i<m; i++)
		{
			if(v[i].first>maior)
			{
				maior=v[i].first;
			}
		}
		cout<<maior<<endl;
		for(int i=0; i<m; i++)
		{
			if(v[i].first==maior)
			{
				cout<<v[i].second<<endl;
			}
		}
	}
}



