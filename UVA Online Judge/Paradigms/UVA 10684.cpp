#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        int x;
        int max=- 999999;
        int atual= 0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            atual+=x;
            if(atual<x)
            {
                atual=x;
            }
            if(max<atual)
            {
                max=atual;
            }
        }
        if(max<=0)
        {
            cout<<"Losing streak."<<endl;
        }
        else
        {
            cout<<"The maximum winning streak is "<<max<<"."<<endl;
        }
    }
}
