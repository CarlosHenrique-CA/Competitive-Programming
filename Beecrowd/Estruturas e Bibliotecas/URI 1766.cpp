#include <bits/stdc++.h>

using namespace std;
typedef struct rena
{
	char nome[110];
	int idade;
	int peso;
	double altura;
}Rena;
int ordenas(const void *a, const void *b)
{
	Rena* aux = (Rena *) a;
	Rena* aux2 = (Rena *) b;
	if (aux->peso > aux2->peso) return -1;
	else if (aux->peso < aux2->peso) return 1;
	else
	{
		if (aux->idade > aux2->idade) return 1;
		else if (aux->idade < aux2->idade) return -1;
		else
		{			
			if (aux->altura > aux2->altura) return 1;
			else if (aux->altura < aux2->altura) return -1;
			else
			{
				return strcmp(aux->nome, aux2->nome);
			}
		}
	}
}

int main()
{
	int cases;
	Rena v[1010];
	int n, m, caso=1;
	cin >> cases;
	for(int a=0; a<cases; a++)
	{
		cin>>n>>m;
		for (int i=0; i<n; i++)
		{
		    cin>>v[i].nome>>v[i].peso>>v[i].idade>>v[i].altura;
		}
		qsort(v,n,sizeof(Rena),ordenas);
		cout << "CENARIO {"<<caso<<"}"<<endl;
		caso++;
		for (int i = 0 ; i < m; i++)
		cout << i + 1 << " - " << v[i].nome << '\n';
	}
}
