#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int arr[21];
int ord[21];
int lis(int n) 
    {
      int lis[n];
    
      lis[1] = 1;
    
      /* Compute optimized LIS values in
         bottom up manner */
      for (int i = 2; i <= n; i++) {
        lis[i] = 1;
        for (int j = 1; j < i; j++)
          if (ord[arr[i]] > ord[arr[j]] && lis[i] < lis[j] + 1)
            lis[i] = lis[j] + 1;
    }

  // Return maximum value in lis[]
  n++;
  return *max_element(lis, lis + n);
}
int main() {
    
    int n;
    cin>>n;
    int x;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        ord[i]=x;
    }
    int in;
    while (cin >> in) 
    { 
        arr[in] = 1;
        for (int i = 2; i <= n; i++) 
        {
          cin >> in;
          arr[in] = i;
        }
        cout << lis(n)<< endl;
      }
      
	return 0;
}
