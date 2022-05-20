#include <iostream>
 
using namespace std;
 
int main() 
{
	double t, a, w, c;
	while(cin>>t>>a>>w>>c)
	{
	double total;
	total=(a/t)*100;
	if(total<w && total<c)
	{
		cout<<"OK"<<endl;
	}
	if(total>=w && total<c)
	{
		cout<<"warning"<<endl;
	}
	if(total>=c)
	{
		cout<<"critical"<<endl;
	}
	}
}
