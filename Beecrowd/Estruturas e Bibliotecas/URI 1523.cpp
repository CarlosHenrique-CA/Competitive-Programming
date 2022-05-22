#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
    int N, K;
    cin>>N>>K;
    while(N!=0 && K!=0)
    {
        int horaentrada[N];
        int horasaida[N];
        int j=0;
        int vetor[N];
        int vetor2[N];
        int nao=0;
        stack<int> x;
        int c=0;
        int aa=0;
        for(int i=0; i<N; i++)
        {
            if(i<K)
            {
				int kaka=0;
                cin>>horaentrada[i];
                cin>>horasaida[i];
                if(i!=0 && horaentrada[i]>=horasaida[i - 1])
                {
                    x.pop();
                    kaka=1;
                }
                if(i!=0 && horasaida[i] > horasaida[i - 1] && kaka==0)
                {
					nao=321;
				}
                x.push(horasaida[i]);
            }
            else
            {
                cin>>vetor[i];
                cin>>vetor2[i];
                c++;
                int koko=0;
                while(x.size()!=0 && vetor[i]>=x.top())
                {
					if(koko==0)
					{
						aa++;
						koko=238912;
					}
					x.pop();
					if(x.size()!=0)
                    {
						if(x.top()<vetor2[i] && vetor[i]<x.top())
						{
							c=23432;
						}
					}
				}
				if(koko==0 && x.size()<K)
				{
					aa++;
						if(x.top()<vetor2[i] && vetor[i]<x.top())
						{
							c=23432;
						}
				}
                x.push(vetor2[i]);
                if(aa!=c)
                {
                    nao=1;
                }
            }
        }
        if(nao==0)
        {
            cout<<"Sim"<<endl;
        }
        else
        {
            cout<<"Nao"<<endl;
        }
        cin>>N>>K;
    }
}
