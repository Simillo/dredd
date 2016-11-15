#include <iostream>
#include <vector>

using namespace std;

vector<int> mm(vector<int> v){
	vector<int> r;
	int t = v.size();
	int s = v[0], maior = 0, seg = 0, m1 = 0, m2 = 0;

	for (int i = 0; i < t; i++){
		s+=v[i];
		if(s>maior){
			seg = maior;
			maior = s;
			m2 = m1;
			m1 = i;
		}else if(s>seg){
			seg = s;
			m2 = i;
		}
	}
	r.push_back(m1);
	r.push_back(m2);
	return r;
}

int main(){
	int ano,altura,qnt;
	cin >> ano >> altura >> qnt;
	vector<int> reg;

	reg.push_back(altura);
	for (int i = 0; i < qnt; i++){
		int aux;
		cin >> aux;
		reg.push_back(aux);
	}

	vector<int> r;
	r = mm(reg);

	cout << (r[0]+ano) << endl << (r[1]+ano) << endl; 
	return 0;
}