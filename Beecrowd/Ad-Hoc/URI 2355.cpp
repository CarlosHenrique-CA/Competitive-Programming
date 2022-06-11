#include <iostream>

using namespace std;

int main()
{
	double N;
	while(cin>>N && N!=0)
	{
		int golbrasil=N/90;
		double golalemanha=(N/90.0) * 7;
		int receba=golalemanha;
		if(golalemanha>receba)
		{
			receba++;
		}
		cout<<"Brasil "<<golbrasil<<" x Alemanha "<<receba<<endl;
	}
}
