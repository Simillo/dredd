#include <iostream>
#include <vector>

using namespace std;

float m(vector<int> v){
	int t = v.size();

	if(t%2)
		return v[t/2];
	return (v[t/2]+v[t/2-1])/2.0;
}

int main(){

	int n;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++){
		int aux;
		cin >> aux;
		v.push_back(aux);
	}

	cout << m(v) << endl;
	return 0;
}