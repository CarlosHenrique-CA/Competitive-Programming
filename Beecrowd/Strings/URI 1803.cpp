#include <iostream>
#include <cstring>

using namespace std;
 
int main() {
    string matring[4];
    string palavra;
    string soma;
    string outrascolunas;
    string ultimacoluna;
    int aaa, bbb, ccc, ddd, total1, aa, bb, cc, dd, total2, a, b, c, d, total3;
    char resultado;
    for(int k=0; k<4; k++){
        cin>>palavra;
        matring[k]=palavra;
    }
    for(int k=0; k<4; k++){
        soma+=matring[k][0];
    }
    int x=0;
    x= matring[0].size();
    for(int ll=0; ll<4; ll++){
	ultimacoluna+=matring[ll][x-1];
	}
	int pinto;
	pinto=1;
		aaa=(ultimacoluna[0]-'0')*1000;
		bbb=(ultimacoluna[1]-'0')*100;
		ccc=(ultimacoluna[2]-'0')*10;
		ddd=(ultimacoluna[3]-'0')*1;
		total1=aaa+bbb+ccc+ddd;
		aa=(soma[0]-'0')*1000;
		bb=(soma[1]-'0')*100;
		cc=(soma[2]-'0')*10;
		dd=(soma[3]-'0')*1;
		total2=aa+bb+cc+dd;
	while(pinto<x-1){
	for(int ll=0; ll<4; ll++){
		outrascolunas+=matring[ll][pinto];
		}
		a=(outrascolunas[0]-'0')*1000;
		b=(outrascolunas[1]-'0')*100;
		c=(outrascolunas[2]-'0')*10;
		d=(outrascolunas[3]-'0')*1;
		total3=a+b+c+d;
		resultado=(total2*total3+total1)%257;
		cout<<resultado;
		outrascolunas="";
		pinto++;
	}
	cout<<endl;
    return 0;
}
