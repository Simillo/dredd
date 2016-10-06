#include <iostream>

using namespace std;

int main(){
	
	int n,l,d1,d2,d3,d4,d5;
	
	cin>>n;
	
	d1 = (n%100000-n%10000)/10000;
	d2 = (n%10000-n%1000)/1000;
	d3 = (n%1000-n%100)/100;
	d4 = (n%100-n%10)/10;
	d5 = n%10;
	
	if(n>99999)
		cout<<"invalido"<<endl;
	else
		cout<<d1<<"..."<<d2<<"..."<<d3<<"..."<<d4<<"..."<<d5<<endl;
	
	
	return 0;
}
