#include <bits/stdc++.h>

using namespace std;

int main ()
{
    queue<string> leste;
    queue<string> oeste;
    queue<string> norte;
    queue<string> sul;
    string N="asdas";
    string n;
    while(cin>>N && N!="0")
    {
        if(N[0]=='-')
        {
            n=N;
            cin>>N;
        }
        if(n=="-4")
        {
            leste.push(N);
        }
        if(n=="-2")
        {
            sul.push(N);
        }
        if(n=="-3")
        {
            norte.push(N);
        }
        if(n=="-1")
        {
            oeste.push(N);
        }
    }
    int t=123, z=0;;
    while(t!=0)
    {
        if(oeste.size()!=0)
        {
            cout<<oeste.front();
            oeste.pop();
            z++;
        }
        t=oeste.size() + leste.size() + sul.size() + norte.size();
        if(t!=0 && z!=0)
        {
            cout<<" ";
            z=0;
        }
        if(norte.size()!=0)
        {
            cout<<norte.front();
            norte.pop();
            z++;
        }
        t=oeste.size() + leste.size() + sul.size() + norte.size();
        if(t!=0 && z!=0)
        {
            cout<<" ";
            z=0;
        }
        if(sul.size()!=0)
        {
            cout<<sul.front();
            sul.pop();
            z++;
        }
        t=oeste.size() + leste.size() + sul.size() + norte.size();
        if(t!=0 && z!=0)
        {
            cout<<" ";
            z=0;
        }
        if(leste.size()!=0)
        {
            cout<<leste.front();
            leste.pop();
            z++;
        }
        t=oeste.size() + leste.size() + sul.size() + norte.size();
        if(t!=0 && z!=0)
        {
            cout<<" ";
            z=0;
        }
        t=oeste.size() + leste.size() + sul.size() + norte.size();
    }
    cout<<endl;
}
