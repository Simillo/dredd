#include <iostream>

using namespace std;

int main(){
	
	int divisor,numerador;
	
	cin>>divisor;
	
	for(;;){
		cin>>numerador;
		if(numerador%divisor==2){
			cout<<numerador/divisor<<endl;
			break;
		}
	}
	
	return 0;
}
