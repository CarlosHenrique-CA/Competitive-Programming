#include <iostream>
 
using namespace std;
 
int main() {
    int HH, MM;
    int x, y, aa, bb;
    char a[5];
    int h8=0, h4, h2, h1;
    int m32, m16, m8, m4, m2, m1;
    while(cin>>a){
	x=(a[0]-'0');
	y=(a[1]-'0');
	aa=(a[3]-'0');
	bb=(a[4]-'0');
	HH=x*10+y;
	MM=aa*10+bb;
	h8=HH/8;
    h4=(HH%8)/4;
    h2=((HH%8)%4)/2;
    h1=((HH%8)%4)%2;
    m32=MM/32;
    m16=(MM%32)/16;
    m8=((MM%32)%16)/8;
    m4=(((MM%32)%16)%8)/4;
    m2=((((MM%32)%16)%8)%4)/2;
    m1=((((MM%32)%16)%8)%4)%2;
        cout<<" ____________________________________________"<<endl;
        cout<<"|                                            |"<<endl;	
        cout<<"|    ____________________________________    |_"<<endl;
        cout<<"|   |                                    |   |_)"<<endl;
        cout<<"|   |   8         4         2         1  |   |"<<endl;
        cout<<"|   |                                    |   |"<<endl;
        cout<<"|   |   ";if((HH/8)==1){cout<<"o         ";}else cout<<"          ";if(h4==1){cout<<"o         ";} else{cout<<"          ";}if(h2==1){cout<<"o      ";}else{cout<<"       ";}if(h1==1){cout<<"   o  |   |"<<endl;}else{cout<<"      |   |"<<endl;}
        cout<<"|   |                                    |   |"<<endl;
        cout<<"|   |                                    |   |"<<endl;
        cout<<"|   |   ";if(m32==1){cout<<"o     ";}else{cout<<"      ";}if(m16==1){cout<<"o     ";}else{cout<<"      ";}if(m8==1){cout<<"o     ";}else{cout<<"      ";}if(m4==1){cout<<"o     ";}else{cout<<"      ";}if(m2==1){cout<<"o     ";}else{cout<<"      ";}if(m1==1){cout<<"o ";}else{cout<<"  ";}cout<<" |   |"<<endl;
        cout<<"|   |                                    |   |"<<endl;
        cout<<"|   |   32    16    8     4     2     1  |   |_"<<endl;
        cout<<"|   |____________________________________|   |_)"<<endl;
        cout<<"|                                            |"<<endl;
        cout<<"|____________________________________________|"<<endl;
		cout<<endl;
		
    }
    return 0;
}
