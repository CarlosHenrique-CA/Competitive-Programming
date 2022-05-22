#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=1;
    for(int jj=0; jj<n; jj++)
    {
        if(x==2)
        {
            cout<<endl;
        }
        else
        {
            x=2;
        }
        int a, b;
        cin>>a>>b;
        int c[b],i=0;
        for(int j=0;j<b;j++)
        {
            cin>>c[j];
        }
        for(i=0;i<a;i++)
        {
            cout<<i<<" -> ";
            for(int j=0;j<b;j++)
            {
                if(c[j]%a==i)
                {
                    cout<<c[j]<<" -> ";
                }
            }
            cout<<"\\\n";
        }
    }
    return 0;
}
