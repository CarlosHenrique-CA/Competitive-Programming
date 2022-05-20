#include <iostream>
 
using namespace std;
 
int main() {
    string numero;
    int N;
    cin>>N;
    for(int j=0; j<N; j++)
    {
		cin>>numero;
		int led=0;
        for(int ka=0; ka<=numero.size(); ka++){
        if(numero[ka]=='0'){
            led=led+6;
        }
        if(numero[ka]=='1'){
            led=led+2;
        }
        if(numero[ka]=='2'){
            led=led+5;
        }
        if(numero[ka]=='3'){
            led=led+5;
        }
        if(numero[ka]=='4'){
            led=led+4;
        }
        if(numero[ka]=='5'){
            led=led+5;
        }
        if(numero[ka]=='6'){
            led=led+6;
        }
        if(numero[ka]=='7'){
            led=led+3;
        }
        if(numero[ka]=='8'){
            led=led+7;
        }
        if(numero[ka]=='9'){
            led=led+6;
        }
    }
    cout<<led<<" leds"<<endl;
    led=0;
	}	
}
