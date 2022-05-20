#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double raio;
    double pi = 3.14159;
    double X;
    cin >> raio ;
    X = raio * raio * pi;
    cout<<fixed<<setprecision(4) << "A="<< X << endl;
    
    return 0;
}
