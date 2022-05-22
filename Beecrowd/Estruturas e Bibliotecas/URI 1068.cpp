#include <iostream>
 
using namespace std;
 
int main() 
{
    string isso;
    while(cin>>isso)
    {
        int errado=0, cnt2=0, cnt=0;
        while (cnt<isso.size()) 
        {
            if (isso[cnt] == '(')
            {
                cnt2++;
            }
            if (isso[cnt++] == ')') 
            {
                if(cnt2>0)
                {
                    cnt2--;
                }
                else 
                {
                    errado=1;
                    break;
                }
            }
        }
        if (errado==1 || cnt2>0)
        {
            cout<<"in";
        }
        cout<<"correct"<<endl;
    }
}
