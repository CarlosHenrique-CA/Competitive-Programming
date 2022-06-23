#include <bits/stdc++.h>

using namespace std;

int vetor[5];
int z=0;

void back(int cnt, int total)
{
    int save=total;
    if(cnt<=4)
    {
        total+=vetor[cnt];
        cnt++;
        back(cnt, total);
        cnt--;
        total=save;
        total-=vetor[cnt];
        cnt++;
        back(cnt, total);
        cnt--;
        total=save;
        total= total * vetor[cnt];
        cnt++;
        back(cnt, total);
        cnt--;
        total=save;
    }
    else
    {
        if(total==23)
        {
            z++;
            return;
        }
    }
}

int main()
{
    while(cin>>vetor[0]>>vetor[1]>>vetor[2]>>vetor[3]>>vetor[4] && (vetor[0]+vetor[1]+vetor[2]+vetor[3]+vetor[4])>0)
    {
        int cnt=0;
        z=0;
        int total=0;
        sort(vetor, vetor + 5);
        do 
        {
            back(1, vetor[0]);
            if (z!=0)
            {
                break;
            }
        } 
        while (next_permutation(vetor, vetor + 5));
        if(z!=0)
        {
            cout<<"Possible"<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }
    }
}


