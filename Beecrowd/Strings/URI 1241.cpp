#include <iostream>
 
using namespace std;
 
int main() {
    int N;
    int x;
    string a, b;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>a>>b;
        int z=0;
        int contador=0;
        for(int k=b.size() - 1; k>=0; k--)
        {
            x=a.size();
            z++;
            if(a[x-z]==b[k])
            {
				contador++;
			}	
        }
        if(contador==b.size())
        {
			cout<<"encaixa"<<endl;
		}
		else
		{
			cout<<"nao encaixa"<<endl;
		}
		contador=0;
		z=0;
    }
    return 0;
}
