#include <iostream>
 
using namespace std;
 
int main() {
    int N;
    cin>>N;
    int intercasa, interrival, gremiocasa, gremiorival, totalgremio, totalinter;
    char xis, xis2;
    for(int i=0; i<N; i++){
		cin>>intercasa>>xis>>gremiorival;
		cin>>gremiocasa>>xis2>>interrival;
		totalinter=intercasa+interrival;
		totalgremio=gremiocasa+gremiorival;
		if(totalgremio>totalinter){
			cout<<"Time 2"<<endl;
	}
	if(totalinter>totalgremio){
		cout<<"Time 1"<<endl;
	}
	if(totalinter==totalgremio){
		if(gremiorival>interrival){
			cout<<"Time 2"<<endl;
		}
		if(gremiorival<interrival){
			cout<<"Time 1"<<endl;
		}
		if(gremiorival==interrival){
			cout<<"Penaltis"<<endl;
		}
	}
}
    return 0;
}
