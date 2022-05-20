#include <iostream>

using namespace std;

int main()
{
    int j;
    char caps='0';
    char letra[50];
    char letra2;
    while(gets(letra) != NULL){
        caps = '0';
        for(j = 0; j < 50; j++){
            if(letra[j] == '\0') break;
                if(caps=='0')
                {
                    if(letra[j]>=97)
                    {
                        letra2=letra[j] - 32;
                        cout<<letra2;
                        caps='1';
                    }
                    else
                    {
                        if(letra[j]==32)
                        {
                            cout<<letra[j];
                        }
                        else
                        {
                        cout<<letra[j];
                        caps='1';
                        }
                    }
                }
                else
                {
                    if(letra[j]>=97)
                    {
                        cout<<letra[j];
                        caps='0';
                    }
                    else
                    {
                        if(letra[j]==32)
                        {
                            cout<<letra[j];
                        }
                        else
                        {
                        letra2=letra[j] + 32;
                        cout<<letra2;
                        caps='0';
                        }
                    }
                }
         }
         cout<<endl;
    }

    return 0;
}
