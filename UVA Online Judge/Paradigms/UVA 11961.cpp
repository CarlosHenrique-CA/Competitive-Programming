#include <bits/stdc++.h>

using namespace std;

queue<string> a;


void back(int cnt, string ex, int ta, int max, string go)
{
    int uy=go.size();
    if(uy==ta && cnt<=max)
    {
        a.push(go);
    }
    string ain=go;
    if(uy<ta)
    {
        if(cnt<=max)
        {
            ain+='A';
            if(ain[uy]!=ex[uy])
            {
                back(cnt + 1, ex, ta, max, ain);
            }
            else
            {
                back(cnt, ex, ta, max, ain);
            }
        }
        ain=go;
        if(cnt<=max)
        {
            ain+='C';
            if(ain[uy]!=ex[uy])
            {
                back(cnt + 1, ex, ta, max, ain);
            }
            else
            {
                back(cnt, ex, ta, max, ain);
            }
        }
        ain=go;
        if(cnt<=max)
        {
            ain+='G';
            if(ain[uy]!=ex[uy])
            {
                back(cnt + 1, ex, ta, max, ain);
            }
            else
            {
                back(cnt, ex, ta, max, ain);
            }
        }
        ain=go;
        if(cnt<=max)
        {
            ain+='T';
            if(ain[uy]!=ex[uy])
            {
                back(cnt + 1, ex, ta, max, ain);
            }
            else
            {
                back(cnt, ex, ta, max, ain);
            }
        }
    }
}

int main()
{
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        int tamain, erros;
        cin>>tamain>>erros;
        string INI;
        cin>>INI;
        int cnt=0;
        string go="";
        back(cnt, INI, tamain, erros, go);
        cout<<a.size()<<endl;
        while(a.size()!=0)
        {
            cout<<a.front()<<endl;
            a.pop();
        }
    }
}
