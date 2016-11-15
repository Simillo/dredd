#include <iostream>
using namespace std;

int f(int n){
	return n<1?0:n<3?1:f(n-1)+f(n-2);
}

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cout << f(i) << " ";
	
	cout << endl;
	return 0;
}