	#include <bits/stdc++.h>
	 
	using namespace std;
	 
	int main() 
	{
		int N;
		cin>>N;
		cin.ignore();
		for(int i=0; i<N; i++)
		{
			queue<string> fila;
			string vetor[1000];
			string produto;
			int pe=0;
			getline(cin, produto);
			string palavra="";
			int tamanho=produto.size();
			for(int j=0; j<tamanho; j++)
			{
				if(produto[j]==' ')
				{
					vetor[pe]=palavra;
					pe++;
					palavra="";
				}
				else
				{
					palavra+=produto[j];
				}
			}
			vetor[pe]=palavra;
			pe++;
			palavra="";
			sort(vetor, vetor + pe);
			for(int kk=0; kk<pe; kk++)
			{
				if(kk==0)
				{
					fila.push(vetor[kk]);
				}
				else
				{
					if(fila.back()==vetor[kk])
					{
						
					}
					else
					{
						fila.push(vetor[kk]);
					}
				}
			}
			while(fila.size()!=0)
			{
				if(fila.size()!=1)
				{
					cout<<fila.front()<<" ";
					fila.pop();
				}
				else
				{
					cout<<fila.front()<<endl;
					fila.pop();
				}
			}
		}
	}
