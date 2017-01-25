#include <iostream>
using namespace std;

int t(int n){
	return n<2?1:2*t(n-1)+1;
}

int main(){
	int n;
	cin >> n;

	cout << t(n) << endl;
}

/*

Código usando bitshift.

#include <iostream>

int main(){
	int n;
	std::cin >> n;
	n = (1<<n)-1;
	std::cout << n << std::endl;
	return 0;
}

*/