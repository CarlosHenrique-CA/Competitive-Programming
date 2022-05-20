#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
   int N;
   cin>>N;
   for(int i=1; i<=N; i++)
   {
       queue<int> x;
       int n, k;
       cin>>n>>k;
       int aux;
       int z=0;
       for(int ka=1; ka<=n; ka++)
       {
           x.push(ka);
       }
       while(x.size()!=1)
       {
           for(int jota=0; jota<k-1; jota++)
           {
               if(z==0)
               {
                   z++;
               }
               aux=x.front();
               x.pop();
               x.push(aux);
           }
           x.pop();
       }
       cout<<"Case "<<i<<": "<<x.front()<<endl;
   }
}
