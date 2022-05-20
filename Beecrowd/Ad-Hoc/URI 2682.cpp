#include <iostream>
 
using namespace std;
 
int main() {
    int N, salvar=0, z=0;
while(cin>>N){
	if(z==0){
    if(N>salvar){
       salvar=N;
    }
    else{
		z++;
	}
}
}
cout<<salvar+1<<endl;
    return 0;
}
