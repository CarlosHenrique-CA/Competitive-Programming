#include <iostream>
 
using namespace std;
 
int main() {
    
    int n;
    while (cin>>n) {
        
        int tamanho[n], i, j, contador=0;
        char lado[n];
        
        for (i = 0; i < n; i++)
            cin>>tamanho[i]>>lado[i];
            
        for (i = 0; i < n; i++) {
            for (j = i+1; j < n; j++) {
                if (tamanho[i] == tamanho[j] && lado[i] != lado[j] && lado[i] != 'X' && lado[j] != 'X') {
                    contador++;
                    lado[i] = 'X';
                    lado[j] = 'X';
                }
            }
        }
        
        cout<<contador<<endl;
    }

    return 0;
}
