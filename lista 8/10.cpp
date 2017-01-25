#include <iostream>
using namespace std;
int s(int n){
	return ++n;
}
int a(int n){
	return --n;
}

int add(int x,int y){
	return y==0?x:add(s(x),a(y));
}
int main(){
	int x,y;
	cin >> x >> y;

	cout << add(x,y) << endl;
}