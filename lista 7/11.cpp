#include <iostream>
#include <vector>

using namespace std;

int f(vector<int> v){
	int c=0, t = v.size(),s;
	for (int i = 0; i < t; i++){
		s=0;
		int index;
		for (int j = i+1; j < t; j++){
			if(v[j]<v[j-1]){
				s++;
				index = j;
			}
			else if(s>0){
			 	break;
			}
		}
		if(s){
			i = index-1;
			c++;
		}
	}
	return c;
}


int main(){
	int qnt;
	cin >> qnt;
	vector<int> v;

	for (int i = 0; i < qnt; i++){
		int aux;
		cin >> aux;
		v.push_back(aux);
	}

	cout << f(v) << endl;

	return 0;
}