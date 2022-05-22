#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int N;
    cin>>N;
    char a='F', b='A', c='C', d='E';
    char salvar2, salvar3, salvar4;
    stack<char> x;
    int cnt=0;
    x.push(a);
    x.push(b);
    x.push(c);
    x.push(d);
    for(int i=0; i<N; i++)
    {
        salvar2=b;
        salvar3=c;
        salvar4=d;
        cin>>a>>b>>c>>d;
        if(x.top()==a)
        {
            x.pop();
            if(x.top()==b)
            {
                x.pop();
                if(x.top()==c)
                {
                    x.pop();
                    if(x.top()==d)
                    {
                        x.pop();
                        cnt++;
                    }
                    else
                    {
                            x.push(salvar2);
                            x.push(salvar3);
                            x.push(salvar4);
                            x.push(a);
                            x.push(b);
                            x.push(c);
                            x.push(d);
                    }
                }
                else
                {
                        x.push(salvar3);
                        x.push(salvar4);
                        x.push(a);
                        x.push(b);
                        x.push(c);
                        x.push(d);
                }
            }
            else
            {
                    x.push(salvar4);
                    x.push(a);
                    x.push(b);
                    x.push(c);
                    x.push(d);
            }
        }
        else
        {
			x.push(a);
            x.push(b);
            x.push(c);
            x.push(d);
		}
        if(x.size()==0)
        {
            x.push('F');
            x.push('A');
            x.push('C');
            x.push('E');  
        }
    }
    cout<<cnt<<endl;
}
 
