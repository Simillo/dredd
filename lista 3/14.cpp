#include <iostream>
#include <cmath>
using namespace std;

/*

NAO USAR BUGADO.

*/



double f(double n){
	return n<2.0?1.0:n*f(n-1.0);
}

int main(){
	int n;
	double s=0;
	
	cin>>n;
	
	for(int i=0;i<=n;i++)
		s+=1.0/f(i);
	
	cout<<s<<endl;
			
	return 0;
}
