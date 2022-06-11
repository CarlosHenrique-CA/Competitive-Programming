#include <iostream>

using namespace std;

int main()
{
	int N;
	while(cin>>N)
	{
		int vetor[N];
		int vetor2[N];
		for(int i=0; i<N; i++)
		{
			cin>>vetor[i];
		}
		for(int i=0; i<N; i++)
		{
			cin>>vetor2[i];
		}
		int gastocima=0;
		int gastobaixo=0;
		int a;
		int z=0;
		int z1=0;
		int atual=vetor[0];
		int pos=1;
		if(atual!=0)
		{
			z++;
		for(int i=1; i<N; i++)
		{
			a=0;
			if((atual>vetor[i] && pos==1 && a==0 )|| (vetor[i]==0 && a==0 && pos==1))
			{	
				gastocima++;
				a=1;
				pos=0;
				atual=vetor2[i];
			}
			if(atual<=vetor[i] && pos==1 && a==0)
			{
				atual=vetor[i];
				a=1;
			}
			if(atual>=vetor2[i] && pos==0 && a==0)
			{
				a=1;
				atual=vetor2[i];
			}
			if((atual<vetor2[i] && pos==0 && a==0) || (vetor2[i]==0 && a==0 && pos==0))
			{
				a=1;
				pos=1;
				atual=vetor[i];
				gastocima++;
			}
		}
		}
		pos=0;
		atual=vetor2[0];
		if(atual!=0)
		{
			z1++;
			for(int i=1; i<N; i++)
			{
				a=0;
				if((atual>vetor[i] && pos==1 && a==0 )|| (vetor[i]==0 && a==0 && pos==1))
				{
					gastobaixo++;
					a=1;
					pos=0;
					atual=vetor2[i];
				}
				if(atual<=vetor[i] && pos==1 && a==0 && vetor[i]!=0)
				{
					atual=vetor[i];
					a=1;
				}
				if(atual>=vetor2[i] && pos==0 && a==0 && vetor2[i]!=0)
				{
					a=1;
					atual=vetor2[i];
				}
				if((atual<vetor2[i] && pos==0 && a==0) || (vetor2[i]==0 && a==0 && pos==0))
				{
					a=1;
					pos=1;
					atual=vetor[i];
					gastobaixo++;
				}
			}
		}
		if(gastocima>gastobaixo && z1!=0 || z==0 && z1!=0)
		{
			cout<<gastobaixo<<endl;
		}
		else
		{
			cout<<gastocima<<endl;
		}
	}
}
