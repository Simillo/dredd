#include <iostream>
#include <vector>

using namespace std;

#define w vector<int>

w f(w v){
	w r;
	for (int i = 0; i < (int)v.size(); i++)
		if(v[i]%2==0 || v[i]%3==0)
			r.push_back(v[i]);
	return r;
}

int main(){
	int n;
	cin >> n;
	w p;
	for (int i = 0; i < n; i++){
		int aux;
		cin >> aux;
		p.push_back(aux);
	}
	w q = f(p);
	for (int i = 0; i < (int)q.size(); i++)
		cout << q[i] << " ";
	return 0;
}