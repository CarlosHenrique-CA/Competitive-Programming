#include <iostream>
 
using namespace std;
 
int main() {
    string palavra;
    int casas;
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>palavra;
        cin>>casas;
        for(int k=0; k<palavra.size(); k++){
            palavra[k]=palavra[k] - casas;
            if(palavra[k]<65){
                palavra[k]=palavra[k] +  26;
            }
        }
        cout<<palavra<<endl;
    }
}
