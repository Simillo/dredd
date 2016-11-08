#include <iostream>

using namespace std;

	typedef struct {
		char carro[50];
		int ano;
		int preco;
	} ref;

int main(){
	int qnt;
	int preco_ref;
	
	cin >> qnt;

	ref v[qnt];

	for(int i = 0;i < qnt;i++)
		cin >> v[i].carro >> v[i].ano >> v[i].preco;

	cin >> preco_ref;

	for(int i = 0 ; i < qnt ; i++)
		if(v[i].preco <= preco_ref)
			cout<<v[i].carro<<" "<<v[i].ano << " "<<v[i].preco << endl;


	return 0;
}