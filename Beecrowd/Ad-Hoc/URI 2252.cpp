#include <iostream>
#include <cmath>
using namespace std;
 
int main() 
{
	int N;
	double vetor[10];
	int ppp=0;
	while(cin>>N)
	{
		ppp++;
		int z=0;
		for(int i=0; i<10; i++)
		{
			cin>>vetor[i];
		}
		cout<<"Caso "<<ppp<<": ";
		while(z!=N)
		{
			int salvar;
			double menor=-2;
			for(int aa=0; aa<10; aa++)
			{
				if(vetor[aa]>menor)
				{
				  salvar=aa;
				  menor=vetor[aa];
				}
			}
			cout<<salvar;
			vetor[salvar]=-232323;
			z++;
			if(z==N)
			{
				cout<<endl;
			}
		}
		z=0;
	}
}
