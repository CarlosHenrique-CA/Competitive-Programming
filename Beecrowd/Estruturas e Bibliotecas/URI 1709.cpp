#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
	int posicao=2, embaralhada=1;
	while(posicao!=1)
	{
    	if(posicao<=x/2)
    	{
    	    posicao+=posicao;
    	}
    	else
    	{
    	    posicao=posicao-(x-posicao + 1);
    	}
    	embaralhada++;
	}
	cout<<embaralhada<<endl;
}
