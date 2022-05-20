#include <iostream>
 
using namespace std;
 
int main() 
{
	int c, p, f;
	cin>>c>>p>>f;
	int total;
	total=c*f;
	if(total>p)
	{
		cout<<'N'<<endl;
	}
	else
	{
		cout<<'S'<<endl;
	}
}
