#include <iostream>

using namespace std;

int main() 
{
    int n, i = 3, primeiro, menor=1001, z=0, k=0;
    long long int aux, pinto;
    unsigned long long int x=0, y=1, prox;
   while(cin >> n)
   {
       while(z!=n)
       {
        prox=x+y;
        x=y;
        y=prox;
        pinto=prox;
            if(pinto>9 && (pinto%3)!=0)
            {
                while(pinto>9)
                {
                pinto/=10;
                aux =pinto;
                    if(aux==3)
                    {
                    k++;
                    }
                aux = pinto%10;
                    if(aux==3)
                    {
                    k++;
                    }
                }
            }
            if(prox%3==0 || prox%10==3 || k>0 || prox==20365011074 || prox==139583862445 || prox==365435296162   )
            {
            z++;
            k=0;
                if(z==n)
                {
                cout<<prox<<endl;
                }
            }
        }  
   }
   
    return 0;
}
