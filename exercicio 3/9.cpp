#include <iostream>

using namespace std;

int f(int n){
	return n<2?1:n*f(n-1);
}

int main(){
	int n;
	cin>>n;
	cout<<f(n)<<endl;
}
