#include <iostream>
#include <vector>
using namespace std;

void imp(vector<int> v){
	int t = v.size()-1;
	if(t < 0)
		cout << "[]";
	else if(t==0)
		cout << "[" << v[0] << "]";
	else{
		cout << "[";
		for (int i = 0; i < t; i++)
				cout <<v[i] << ", ";
		cout << v[t] <<  "]";
	}
}

int main(){
	int n;
	cin >> n;

	vector<int> r;
	for (int i = 0; i < n; i++){
		int aux;
		cin >> aux;
		r.push_back(aux);
	}
	imp(r);
	cout << endl;
}