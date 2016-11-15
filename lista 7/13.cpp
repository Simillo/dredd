#include <iostream>
using namespace std;

int f(int n,int n1,int n2){
	return n<1?n1:n<2?n2:n%2?f(n-1,n1,n2)-f(n-2,n1,n2):f(n-1,n1,n2)+f(n-2,n1,n2);
}

int main(){
	int n,n1,n2;
	cin >> n >> n1 >> n2;
	for (int i = 0; i < n; i++)
		cout << f(i,n1,n2) << " ";
	cout << endl;
	return 0;
}