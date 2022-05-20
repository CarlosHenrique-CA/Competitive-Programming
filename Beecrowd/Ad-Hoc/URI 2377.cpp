#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin>>x>>y;
    int qnt=x/y;
    int a, b;
    cin>>a>>b;
    int t=a*x;
    qnt=qnt*b;
    t+=qnt;
    cout<<t<<endl;
}
