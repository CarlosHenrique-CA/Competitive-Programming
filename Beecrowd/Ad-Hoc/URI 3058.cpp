#include <bits/stdc++.h>
#include <iomanip>

using namespace std;
 
int main() 
{
	int N;
	cin>>N;
	double grama;
	double total;
	double valor;
	double menor=1000000;
	for(int i=0; i<N; i++)
	{
		cin>>valor>>grama;
		double info=(1000/grama);
		total=info*valor;
		if(total<menor)
		{
			menor=total;
		}
	}
	cout<<fixed<<setprecision(2)<<menor<<endl;
}
