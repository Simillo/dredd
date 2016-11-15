#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

typedef struct
{
	char nome[100];
	int telefone;
} Dados;

vector<Dados> v;
Dados aux;

void man(Dados a){
	int t = v.size();
	if(t==0)
		v.push_back(a);
	else{
		int p = 1;
		for(int i=0;i<t;i++)
			if(strcmp(a.nome,v[i].nome)<0){
				v.insert(v.begin()+i,a);
				p=0;
				break;		
			}
		if(p)
			v.push_back(a);
	}
}

int main(){
	int n;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> aux.nome >> aux.telefone;
		man(aux);
		cout << endl;
		for(int i=0;i<(int)v.size();i++)
			cout << v[i].nome << " " << v[i].telefone << endl;
	}

	return 0;
}