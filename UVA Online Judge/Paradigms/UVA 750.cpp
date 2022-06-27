#include <bits/stdc++.h>

using namespace std;

int matriz[9][9];
int vetor[9]; 
int ain;

void rainha(int coluna, queue<int> fila)
{
	if(fila.size()==7)
	{
		ain++;
		if(ain<10)
		{
			cout<<" "<<ain<<"      ";
		}
		else
		{
			cout<<ain<<"      ";
		}
		for(int i=1; i<=8; i++)
		{
			if(vetor[i]!= - 1)
			{
			    if(i==8)
			    {
			        cout<<vetor[i]<<endl;
			    }
			    else
			    {
				    cout<<vetor[i]<<" ";
			    }
			}
		}
	}
	else
	{
	if(vetor[coluna]!= - 1 )
	{
		rainha(coluna + 1, fila);
	}
	else
	{
		for(int i=1; i<=8; i++)
		{
			int b=0;
			for(int c=1; c<9; c++)
			{
				if(vetor[c]==i)
				{
					b++;
				}
			}
			int salvar=i;
			int salvar2=coluna;
			while(salvar>1 && salvar2>1 && b==0)
			{
				//cima esquerda
				salvar--;
				salvar2--;
				if(vetor[salvar2]==salvar)
				{
					b++;
				}
			}
			salvar=i;
			salvar2=coluna;
			while(salvar<8 && salvar2<8 && b==0)
			{
				salvar++;
				salvar2++;
				if(vetor[salvar2]==salvar)
				{
					b++;
				}
			}
			salvar=i;
			salvar2=coluna;
			while(salvar>1 && salvar2<8 && b==0)
			{
				salvar--;
				salvar2++;
				if(vetor[salvar2]==salvar)
				{
					b++;
				}
			}
			salvar=i;
			salvar2=coluna;
			while(salvar<8 && salvar2>1 && b==0)
			{
				//baixo esquerda
				salvar++;
				salvar2--;
				if(vetor[salvar2]==salvar)
				{
					b++;
				}
			}
			if(b==0)
			{
				queue<int> sexo=fila;
				vetor[coluna]=i;
				sexo.push(i);
				rainha(coluna + 1, sexo);
				vetor[coluna]= - 1;
			}
		}
	}
}
}

int main()
{
	int n;
	cin>>n;
	string txt;
	for(int i=0; i<n; i++)
	{
		ain=0;
		cin.ignore();
	getline(cin, txt);
		int x, y;
		cin>>x>>y;
		for(int b=1; b<9; b++)
		{
			vetor[b]= - 1;
			for(int c=1; c<9; c++)
			{
				matriz[b][c]= - 1;
			}
		}
		cout<<"SOLN       COLUMN"<<endl;
		cout<<" #      1 2 3 4 5 6 7 8"<<endl;
		cout<<endl;
		matriz[x][y]=0;
		vetor[y]=x;
		queue<int> fila;
		rainha(1, fila);
		if(i!= n - 1)
		{
		    cout<<endl;
		}
	}
}
