#include <iostream>
using namespace std;
int main()
{
	int vet[5],vett[5];
	bool ok=true;
	for(int i=0;i<5;i++) cin>>vet[i];
	for(int i=0;i<5;i++) cin>>vett[i];
	for(int i=0;i<5;i++)
	{
		if(vet[i]==vett[i]) ok=false;
	}
	cout<<(ok?"Y\n":"N\n");
}
