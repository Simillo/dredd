#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool ispali(string s1){
	string s2 = "";

	for (int i = (int)s1.size()-1; i >= 0; s2+=s1[i--]);

	return s1==s2;
}

vector<string> r(vector<string> v){
	sort(v.begin(), v.end());
	vector<string> re;
	re.push_back(v[0]);
	re.push_back(v.back());
	return re;
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
	if((int)p.size()>0){
		vector<string> q = r(p);
		cout << q[0] << endl << q[1] << endl;
	}
	return 0;
}
