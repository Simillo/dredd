#include <iostream>
#include <vector>

using namespace std;

bool iscup(int n){
	int h = n;
	vector<int> v;	
	while(n){
		v.push_back(n%10);
		n/=10;
	}
	int s = 0,m=1;
	for(int i=(int)v.size()-1;i>=0;i--){
		s = s+(v[i]*m);
		m*=10;
	}
	return s==h;
}

void mm(vector<int> v){
	int maior = v[0], menor = v[0];
	for(int i = 0;i<(int)v.size();i++){
		if(v[i] > maior)
			maior = v[i];
		if(v[i] < menor)
			menor = v[i];
	}
	cout << menor << endl << maior << endl;
}

int main(){
	int qnt;
	cin >> qnt;
	vector<int> t;
	for(int i=0;i<qnt;i++){
		int aux;
		cin >> aux;
		t.push_back(aux);
	}
	vector<int> c;
	for (int i = 0; i < qnt; i++)
		if(!iscup(t[i]))
			cout << t[i] << endl;
		else
			c.push_back(t[i]);
	mm(c);
	return 0;
}