#include <iostream>
#include <iomanip>

using namespace std;
 
int main() 
{
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        int M;
        cin>>M;
        double valor[M];
        string fruta[M];
        for(int j=0; j<M; j++)
        {
            cin>>fruta[j];
            cin>>valor[j];
        }
        int P;
        cin>>P;
        string compra;
        int quantidade;
        double total=0;
        for(int kaka=0; kaka<P; kaka++)
        {
            cin>>compra;
            cin>>quantidade;
            for(int j=0; j<M; j++)
            {
                if(compra==fruta[j])
                {
                    total+=valor[j]*quantidade;
                }
            }
        }
        cout<<fixed<<setprecision(2)<<"R$ "<<total<<endl;
    }
}
