#include <iostream>
using namespace std;


int f(int v[], int b, int p, int s){
	return p>s?0:v[p]==b?1:f(v,b,++p,s);
}

int main(){

	int n,b;

	cin >> n;

	int v[n];

	for(int i=0;i<n;i++)
		cin >> v[i];

	cin >> b;


	cout << f(v,b,0,n) << endl;
	return 0;
}