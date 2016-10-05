#include <iostream>

using namespace std;

int main(){
	
	int n;
	
	float t=0;
	n = 41000;
//	cout<<20000/100*5;
	if(n<=20000){
		t+=n/100*5;
		cout<<n+t<<endl;
	}else if(n>20000&&n<=40000){
		t+=n/100*10;
		t+=(n+t)/100*30;
		cout<<n+t<<endl;
	}else{	
		t+=n/100*15;
		t+=(n+t)/100*45;
		cout<<n+t<<endl;
	}
	
	return 0;
	
}
