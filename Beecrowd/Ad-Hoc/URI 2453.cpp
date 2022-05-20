#include <iostream>

using namespace std;
 
int main() {
    string letra;
    int x;
    getline(cin,letra);
    x=0;   
	for(int i=0; i<letra.size(); i++)
	{ 
		if(x%2!=0)
		{
			cout<<letra[i];
		}
		if(letra[i]==' ')
		{
			cout<<letra[i];
			x++;	
		}
		x++;
	}
	cout<<endl;
	return 0;
}
