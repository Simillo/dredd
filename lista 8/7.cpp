#include <iostream>
using namespace std;

int c (int n, int k){
	return k==0||k==n?1:c(n-1,k-1)+c(n-1,k);
}

int main(){
	int n,k;
	cin >> n >> k;

	cout << c(n,k) << endl;
	return 0;
}