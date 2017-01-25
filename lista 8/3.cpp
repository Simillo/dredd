#include <iostream>

using namespace std;

int s = 0;

int f(int n, int o){
	cout << s << " ";
	
	return o == s ?  n : f(++s,o);
}

int main(){
	
	int i;
	
	cin >> i;
    
    f(i,i);
    
    return 0;
}
