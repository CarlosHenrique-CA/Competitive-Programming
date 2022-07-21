#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int arr[500005];

int lis(int n) 
    {
      int lis[n];
    
        lis[0]= - 1;
      lis[1] = 1;
    
      /* Compute optimized LIS values in
         bottom up manner */
      for (int i = 2; i <= n; i++) {
        lis[i] = 1;
        for (int j = 1; j < i; j++)
          if (arr[i] <= arr[j] && lis[i] < lis[j] + 1)
            lis[i] = lis[j] + 1;
    }

  // Return maximum value in lis[]
  n++;
  return *max_element(lis, lis + n);
}
int main() {
    int pe=0;
    int n;
    arr[0]= - 1;
    while(cin>>n && n!=- 1)
    {
        pe++;
        if(pe!=1)
        {
            cout<<endl;
        }
        int count=1;
        arr[count]=n;
        count++;
        int x;
        while(cin>>x && x!= - 1)
        {
            arr[count]=x;
            count++;
        }
        count--;
        cout<<"Test #"<<pe<<":"<<endl;
        cout<<"  maximum possible interceptions: "<<lis(count)<<endl;
    }
}
