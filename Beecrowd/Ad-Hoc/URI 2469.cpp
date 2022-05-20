#include <iostream>
 
using namespace std;
 
int main() {
int N, maior=0;
cin>>N;
int vetor[N];
int z=0;
int j=0, valor=0;
for(int i=0; i<N; i++){
    cin>>vetor[i];
}
for(int k=0; k<N; k++){
    for(int ff=0; ff<N; ff++){
        if(vetor[z]==vetor[ff])
        {
            j++;
        }
        if(j>maior || j==maior && vetor[z]>valor){
            maior=j;
            valor=vetor[z];
        }
      }
      j=0;
      z++;
    }
cout<<valor<<endl;

    return 0;
}
