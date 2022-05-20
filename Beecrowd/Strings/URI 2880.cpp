#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
	string padrao;
	string crib;
	int cnt=0;
	cin>>padrao>>crib;
	int tamanho=padrao.size();
	int tama=crib.size();
	int pa=0;
	for(int i=0; i<=tamanho - tama; i++)
	{
		int conta=0;
		for(int j=0; j<tama; j++)
		{
			if(padrao[j + pa]==crib[j])
			{
				conta=4242;
				break;
			}
		}
		if(conta==0)
		{
			cnt++;
		}
		pa++;
	}
	cout<<cnt<<endl;
}
