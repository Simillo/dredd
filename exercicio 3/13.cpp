#include <iostream>
#include <cmath>

using namespace std;

int gdc(int a, int b){
	return b?gdc(b,a%b):abs(a);
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<gdc(a,b)<<endl;
	return 0;
}
