#include <iostream>

using namespace std;

int main(){
	int d,total,t,n1,n2,n5,n10,n20;
	
	cin>>d>>total;
	
	t = d-total;
	
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
	
	cout<<n20<<endl;
	cout<<n10<<endl;
	cout<<n5<<endl;
	cout<<n2<<endl;
	cout<<n1<<endl;
	
	return 0;
}
