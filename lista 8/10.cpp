#include <iostream>
using namespace std;

int add(int x,int y){
	if (!x)
      return y;
   else
      return add((x & y) << 1, x ^ y);
}

int main(){
	int x,y;
	cin >> x >> y;

	cout << add(x,y) << endl;
}