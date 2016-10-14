#include <iostream>

using namespace std;

int main(){
	
	int t,n100,n50,n20,n10,n5,n2,n1;
	
	cin>>t;
	
	n100 = t/100;
	t-=(n100*100);
	
	n50 = t/50;
	t-=(n50*50);
	
	n20 = t/20;
	t-=(n20*20);
	
	n10 = t/10;
	t-=(n10*10);
	
	n5 = t/5;
	t-=(n5*5);
	
	n2 = t/2;
	t-=(n2*2);
	
	n1 = t/1;
	t-=n1;
	
	cout<<n100<<endl;
	cout<<n50<<endl;
	cout<<n20<<endl;
	cout<<n10<<endl;
	cout<<n5<<endl;
	cout<<n2<<endl;
	cout<<n1<<endl;
	
	return 0;
}
