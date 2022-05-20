#include <iostream>
using namespace std;
 
int main() {
    int x;
	int i;
	int n;
	char comandos;
	while (cin>>n)
	{
	    if(n==0){
	        exit(0);
	    }
		x = 0;
		for (i = 0; i < n; i++){
		    cin>>comandos;
			if (comandos== 'D')
			{
				x++;
				if (x==4)
				{
					x=0;
				}
			}
			else
			{
				x--;
				if (x ==-4)
				{
					x = 0;
				    
				}

			}
		}
		if(x==1 || x==-3){
		cout<<"L"<<endl;}
		if(x==2 || x==-2){
		cout<<"S"<<endl;}
		if(x==3 || x==-1){
		cout<<"O"<<endl;}
		if(x==0){
		    cout<<"N"<<endl;
		}

	}
    return 0;
}
