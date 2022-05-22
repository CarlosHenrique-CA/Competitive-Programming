#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
    int N;
    cin>>N;
    while(N!=0)
    {
        queue<int> x;
        int z=0;
        for(int i=1; i<=N; i++)
        {
            x.push(i); 
        }
        while(x.size()>1)
        {
            if(z==0)
            {
                cout<<"Discarded cards: ";
                z++;
            }
            if(x.size()>2)
            {
                cout<<x.front()<<", ";
            }
            else
            {
                cout<<x.front()<<endl;
            }
            x.pop();
            x.push(x.front());
            x.pop();
        }
        cout<<"Remaining card: "<<x.front()<<endl;
        cin>>N;
    }
}
