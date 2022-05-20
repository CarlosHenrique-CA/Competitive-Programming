#include <iostream>
 
using namespace std;
 
int main() {
    int N=10, q=0, jota=0, posicao;
    int X[5];
    while(N!=0){
        cin>>N;
        if(N==0){
		exit(0);
		}
		for(int f=0; f<N; f++){
        for(int i=0; i<5; i++){
            cin>>X[i];
            jota++;
            if(X[i]<=127){
                q++;
                posicao=jota;
            }
        }
        if(q==1 && posicao==1){
            cout<<"A"<<endl;
        }
        if(q==1 && posicao==2){
            cout<<"B"<<endl;
        }
        if(q==1 && posicao==3){
            cout<<"C"<<endl;
        }
        if(q==1 && posicao==4){
            cout<<"D"<<endl;
        }
        if(q==1 && posicao==5){
            cout<<"E"<<endl;
        }
        if(q!=1){
            cout<<"*"<<endl;
        }
        q=0;
        jota=0;
	}
    }
    return 0;
}
