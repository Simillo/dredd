#include <iostream>
using namespace std;

int min(int x, int y, int z){
	return x < y ? (x < z ? x : z) : (y < z ? y : z);
}

int f(int n){
	return 	n<4?n:min(f(n-1),f(n-2),f(n-3))+1;
}

int main(){

	int n;

	cin >> n;

	cout << f(n) << endl;
	return 0;
}