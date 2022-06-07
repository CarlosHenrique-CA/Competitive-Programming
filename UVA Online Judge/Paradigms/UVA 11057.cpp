#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int vetor[n];
        for(int i=0; i<n; i++)
        {
            cin>>vetor[i];
        }
        sort(vetor, vetor + n);
        int preco;
        cin>>preco;
        int x=0;
        int y= n - 1;
        int save, save2;
        while(x<y)
        {
            if((vetor[x] + vetor[y])==preco)
            {
                save=x;
                save2=y;
                y--;
                x++;
            }
            else
            {
                if((vetor[x] + vetor[y])>preco)
                {
                    y--;
                }
                else
                {
                    x++;
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<vetor[save]<<" and "<<vetor[save2]<<"."<<endl;
        cout<<endl;
        cin.ignore();
        string txt;
        getline(cin, txt);
    }
}
