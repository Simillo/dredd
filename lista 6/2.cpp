#include <iostream>
#include <cstring>

using namespace std;
	
	typedef struct 
	{
		char nome[20];
		char sexo;
		float altura;
		float peso;
	} Dados;

int main(){
	int qnt;

	cin >> qnt;
	
	Dados v[qnt];

	for(int i = 0;i < qnt; i++)
		cin >> v[i].nome >> v[i].sexo >> v[i].altura >> v[i].peso;

	float m = -1;
	
	char nomemaior[20];

	for(int i = 0;i < qnt; i++)
		if(v[i].peso > m){
			m = v[i].peso;
			strcpy(nomemaior,v[i].nome);
		}

	cout << nomemaior << endl;
	
/*
    Homens: 72.7 * altura - 58
	Mulheres: 62.1 * altura - 44.7
*/

	for(int i = 0;i<qnt;i++){
		if(v[i].sexo == 'H'){
			cout << v[i].nome << " " << (v[i].peso - (72.7 * v[i].altura - 58.0)) << endl;
		}else{
			cout << v[i].nome << " " << (v[i].peso - (62.1 * v[i].altura - 44.7)) << endl;
		}
	}
	return 0;
}