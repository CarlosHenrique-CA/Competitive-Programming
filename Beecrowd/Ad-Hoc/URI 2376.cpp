#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
    queue<char> x;
    x.push('A');
    x.push('B');
    x.push('C');
    x.push('D');
    x.push('E');
    x.push('F');
    x.push('G');
    x.push('H');
    x.push('I');
    x.push('J');
    x.push('K');
    x.push('L');
    x.push('M');
    x.push('N');
    x.push('O');
    x.push('P');
    int ka;
    int y;
    int aux;
    for(int i=0; i<15; i++)
    {
        cin>>ka>>y;
        if(ka>y)
        {
            aux=x.front();
            x.pop();
            x.pop();
            x.push(aux);
        }
        else
        {
            x.pop();
            aux=x.front();
            x.pop();
            x.push(aux);
        }
    }
    cout<<x.front()<<endl;
}
