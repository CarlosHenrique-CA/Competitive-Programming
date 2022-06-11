#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p,q,soma;
	char c;
	cin>>p>>c>>q;
	if(c=='+')
	{
		soma=p+q;
	}
	else
	{
		soma=p*q;
	}
	if(soma>n) cout<<"OVERFLOW\n";
	else cout<<"OK\n";
}
