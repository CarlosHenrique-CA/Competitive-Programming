#include <iostream>
 
using namespace std;
 
int main() {
	string cpf;
    long int total;
    long int total2;
    while(cin>>cpf){
    total=(cpf[0]-48)+((cpf[1]-48)*2)+((cpf[2]-48)*3)+((cpf[4]-48)*4)+((cpf[5]-48)*5)+((cpf[6]-48)*6)+((cpf[8]-48)*7)+((cpf[9]-48)*8)+((cpf[10]-48)*9);
    total2=((cpf[0]-48)*9)+((cpf[1]-48)*8)+((cpf[2]-48)*7)+((cpf[4]-48)*6)+((cpf[5]-48)*5)+((cpf[6]-48)*4)+((cpf[8]-48)*3)+((cpf[9]-48)*2)+((cpf[10]-48)*1); 
    if(total%11==10){
	total=0;
	}
	if(total2%11==10){
	total2=0;
	}
    if(total%11==(cpf[12]-48) && total2%11==(cpf[13]-48)){
        cout<<"CPF valido"<<endl;
    }
    else{
        cout<<"CPF invalido"<<endl;
    }
    }
    return 0;
}
