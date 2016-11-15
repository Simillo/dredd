#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool ispali(string s1){
	string s2 = "";

	for (int i = (int)s1.size()-1; i >= 0; i--) s2+=s1[i];

	return s1==s2;
}

void r(vector<string> v){
	sort(v.begin(), v.end());
	cout << v[0] << endl << v[int(v.size()-1)] << endl;
}

int main(){
	int qnt;
	cin >> qnt;
	vector<string> v,p;
	for (int i = 0; i < qnt; i++){
		string aux;
		cin >> aux;
		v.push_back(aux);
	}
	for (int i = 0; i < qnt; i++)
		if(!ispali(v[i]))
			cout << v[i] << endl;
		else
			p.push_back(v[i]);

	r(p);
	return 0;
}