#include <iostream>
using namespace std;

int s = 0;
int f(int n,int o){
	return o>0?(s+=n,f(n,--o)):s;
}

int main(){

	int n,o;

	cin >> n >> o;

	cout << f(n,o) << endl;

	return 0;
}