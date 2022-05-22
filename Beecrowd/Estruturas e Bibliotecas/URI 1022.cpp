#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
	int N;
	cin>>N;
	for(int i=0; i<N; i++)
	{
		int cima1, cima2;
		int div1, div2;
		char baixo1, baixo2;
		string sinal;
		cin>>cima1>>baixo1>>div1>>sinal>>cima2>>baixo2>>div2;
		int salvar, salvar2;
		salvar=div1;
		salvar2=div2;
		int salvar3, salvar4;
		if(sinal=="+" || sinal=="-")
		{
			div1=div1 * div2;
			div2=div1;
			cima1= (div1/salvar) * cima1;
			cima2= (div2/salvar2) * cima2;
		}
		int cimatotal;
		int baixototal;
		baixototal=div2;
		if(sinal=="+")
		{
			cimatotal=cima1 + cima2;
		}
		else
		{
			if(sinal=="-")
			{
				cimatotal=cima1 - cima2;
			}
			else
			{
				if(sinal=="*")
				{
					cimatotal=cima1 * cima2;
					baixototal=div1 * div2;
				}
				if(sinal=="/")
				{
					cimatotal=cima1*div2;
					baixototal=div1*cima2;
				}
			}
		}
		salvar3=cimatotal;
		salvar4=baixototal;
		if(cimatotal>baixototal)
		{
			for(int i=cimatotal; i>=2; i--)
			{
				while(cimatotal%i==0 && baixototal%i==0)
				{
					cimatotal/=i;
					baixototal=baixototal/i;
				}
			}
		}
		else
		{
			for(int i=baixototal; i>=2; i--)
			{
				while(cimatotal%i==0 && baixototal%i==0)
				{
					cimatotal=cimatotal/i;
					baixototal=baixototal/i;
				}
			}
		}
		cout<<salvar3<<baixo1<<salvar4<<" = "<<cimatotal<<baixo1<<baixototal<<endl;
	}
}
