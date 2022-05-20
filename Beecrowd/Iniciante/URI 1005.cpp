#include <iostream>
#include <iomanip> 
 
using namespace std;
 
int main() {
 
 double X;
 double Y;
 double K;
 double H;
 double L;
 cin >> X >> Y;
 K = X * 3.5;
 H = Y * 7.5;
 L = (K + H)/11;
 
 cout<<fixed<<setprecision(5)<< "MEDIA = " <<L<<endl;
    return 0;
}
