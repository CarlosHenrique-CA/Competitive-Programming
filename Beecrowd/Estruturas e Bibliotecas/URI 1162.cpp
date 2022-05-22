#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        int n, x, a=0;
        queue<int> pilha;
        cin>>n;
        int vetor[n];
        for(int j=0; j<n; j++)
        {
            cin>>x;
            pilha.push(x);
            vetor[j]=x;
        }
        int k=0;
        for(int j=1; j<=n; j++)
        {
            while(j!=pilha.front())
            {
                pilha.pop();
                a++;
            }
            while(pilha.size()!=0)
            {
				pilha.pop();
			}
            for(k=0; k<n; k++)
            {
				if(vetor[k]>j)
				{
					pilha.push(vetor[k]);
				}
            }
        }
        cout<<"Optimal train swapping takes "<<a<<" swaps."<<endl;
    }
}
