#include <iostream>
using namespace std;

int s = 0;
void f(int n1,int n2, int q){
	if(q){
		s = n1 + n2;
		n1 = n2;
		n2 = s;
		cout << s << " ";
		f(n1,n2,--q);
	}
}

int main(){
	int n1,n2,q;

	cin >> n1 >> n2 >> q;

	cout << n1 << " " << n2 << " ";

	f(n1,n2,q-2);
}