#include <iostream>

using namespace std;

int main ()
{

    int ppp = 0;
    int c, zero;
    int linha, coluna;
    bool bo, ok = true;
    int alinha, acoluna;

    cin>>alinha>>acoluna;

    for (linha=0; linha<alinha; ++linha)
    {

        zero=0;
        bo = true;

        for (coluna = 0; coluna<acoluna; ++coluna)
        {

            cin>>c;
            if (c==0 && bo)
            {
                zero++;
			}
            else
            {
                bo=false;
			}
        }

        if (linha != 0)
        {

            if ((zero>ppp || (zero==ppp && zero==acoluna)) && ok)
            {
                ppp=zero;
			}
            else
            {
                ppp = 0;
                ok=false;
            }
		}
        else
            ppp=zero;
    }

    if (ppp)
    {
        cout<<"S"<<endl;
	}
    else
    {
        cout<<"N"<<endl;
	}

}
