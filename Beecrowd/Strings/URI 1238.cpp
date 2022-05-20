#include <iostream>
 
using namespace std;
 
int main() 
{
    int N;
    cin>>N;
    string p1, p2;
    for(int i=0; i<N; i++)
    {
        cin>>p1>>p2;
        if(p1.size() >= p2.size())
        {
            for(int kk=0; kk<p1.size(); kk++)
            {
                cout<<p1[kk];
                if(kk<p2.size())
                {
                    cout<<p2[kk];
                }
            }
        }
        else{
            for(int kk=0; kk<p2.size(); kk++)
            {
                if(kk<p1.size())
                {
                    cout<<p1[kk];
                }
                cout<<p2[kk];
            }
        }
        cout<<endl;
    }
}
