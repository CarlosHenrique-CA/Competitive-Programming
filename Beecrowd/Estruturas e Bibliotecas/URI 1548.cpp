#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int N, n, x;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>n;
        int vetor[n], cnt=0;
        int vetor2[n];
        for(int j=0; j<n; j++)
        {
            cin>>x;
            vetor[j]=x;
            vetor2[j]=x;
        }
        sort(vetor2, vetor2+ n);
        for(int j=1; j<=n; j++)
        {
            if(vetor[j - 1]==vetor2[n - j])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
