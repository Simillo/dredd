#include <iostream>
using namespace std;

int main(){
	
	float n1,n2,n3,p1,p2,p3;
	int s=0;
	
	cin>>n1>>n2>>n3;
	cin>>p1>>p2>>p3;
	
	s=n1*p1+n2*p2+n3*p3;
	s/=(p1+p2+p3);
	
	
	cout<<s<<endl;
	
	return 0;
}
