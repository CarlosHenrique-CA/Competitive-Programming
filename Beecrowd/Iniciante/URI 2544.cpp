#include <iostream>
 
using namespace std;
 
int main() 
{
    int N;
    while(cin>>N)
    {
        int cnt= - 1;
        while(N!=0)
        {
			N=N/2;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
