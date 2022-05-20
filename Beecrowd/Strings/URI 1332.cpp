#include <iostream>
 
using namespace std;
 
int main() {
    int N;
    cin>>N;
    int z=0;
    string palavra;
    for(int i=0; i<N; i++)
    {
        cin>>palavra;
        if(palavra.size()==5)
        {
            if(palavra[0]=='t')
            {
                z++;
            }
            if(palavra[1]=='h')
            {
                z++;
            }
            if(palavra[2]=='r')
            {
                z++;
            }
            if(palavra[3]=='e')
            {
                z++;
            }
            if(palavra[4]=='e')
            {
                z++;
            }
            if(z>=4)
            {
                cout<<'3'<<endl;
            }
            z=0;
        }
        else
        {
            if(palavra[0]=='o')
            {
                z++; 
            
                if(palavra[1]=='n')
                {
                    z++;
                }
                if(palavra[2]=='e')
                {   
                    z++;
                }
            }
            if(palavra[1]=='n')
            {
                z++; 
            
                if(palavra[0]=='o')
                {
                    z++;
                }
                if(palavra[2]=='e')
                {   
                    z++;
                }
            }
            if(palavra[2]=='e')
            {
                z++; 
            
                if(palavra[1]=='n')
                {
                    z++;
                }
                if(palavra[0]=='o')
                {   
                    z++;
                }
            }
            if(z>=2)
            {
                cout<<'1'<<endl;  
            }
            z=0;
            if(palavra[0]=='t')
            {
                z++; 
            
                if(palavra[1]=='w')
                {
                    z++;
                }
                if(palavra[2]=='o')
                {   
                    z++;
                }
            }
            if(palavra[1]=='w')
            {
                z++; 
            
                if(palavra[0]=='t')
                {
                    z++;
                }
                if(palavra[2]=='o')
                {   
                    z++;
                }
            }
            if(palavra[2]=='o')
            {
                z++; 
            
                if(palavra[1]=='w')
                {
                    z++;
                }
                if(palavra[0]=='t')
                {   
                    z++;
                }
            }
            if(z>=2)
            {
                cout<<'2'<<endl;
            }
        }
        z=0;
    }
    return 0;
}
