#include <iostream>
#include <vector>
using namespace std;

vector<int> b(vector<int> v, int busca){
	int l=0, inicio=0,meio,fim=v.size()-1;
	int a=0;
	while(!a && inicio<=fim){
		meio = (inicio+fim)/2;
		if(busca < v[meio])
			fim = meio-1;
		else if(busca > v[meio])
			inicio = meio+1;
		else
			a = 1;
		l++;
	}
	vector<int> q;
	if(!a || inicio>fim)
		q.push_back(-1);
	else
		q.push_back(meio);
	q.push_back(l);
	return q;
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
	int bu;
	cin >> bu;
	vector<int> q = b(v,bu);
	cout << q[0] << endl << q[1] << endl;
	return 0;
}