#include <iostream>
using namespace std;

int f(int v[], int s){
	if(s==1)
		return v[0];
	else
		return v[s] < f(v,s-1) ? v[s] : f(v,s-1);
}

int main(){
	int n;
	cin >> n;

	int v[n];
	for (int i = 0; i < n; ++i)
		cin >> v[i];

	cout << f(v,n-1) << endl;
	return 0;
}