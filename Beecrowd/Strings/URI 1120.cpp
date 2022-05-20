#include <iostream>
 
using namespace std;
 
int main() {
	char errado;
	string palavra;
	cin>>errado;
	cin>>palavra;
	int z=0;
	int ka=0;
	while(errado!='0' && palavra!="0")
	{
		for(int i=0; i<palavra.size(); i++)
		{
			
		    if(palavra[i]!=errado)
		    {	
				if(i!=0)
				{
					if(z==0 && palavra[i] == '0')
					{
						
					}
					else
					{
						cout<<palavra[i];
						z++;
						ka++;
					}
				}
				else
				{
					if(palavra[i]=='0')
					{
					
					}
					if(palavra[i]!='0')
					{
					cout<<palavra[i];
					ka++;
					}
				}
		    }
		}
		if(ka==0)
		{
			cout<<'0';
		}
		ka=0;
		z=0;
		cout<<endl;
		cin>>errado;
		cin>>palavra;
	}	

}
