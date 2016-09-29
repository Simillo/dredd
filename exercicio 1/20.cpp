#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float n;
	cin>>n;
	cout<<2*log((n+sqrt((n*n)+4))/2)<<endl;
}
