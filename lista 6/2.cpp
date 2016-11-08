#include <iostream>
#include <cstring>

using namespace std;
	
	typedef struct 
	{
		char nome[20];
		char sexo;
		float altura;
		float peso;
		float dif;
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

	for(int i = 0;i<qnt;i++){
		if(v[i].sexo == 'H'){
			v[i].dif = ((72.7 * v[i].altura - 58.0)-v[i].peso);
		}else{
			v[i].dif = ((62.1 * v[i].altura - 44.7)-v[i].peso);
		}
	}

	for(int i=0;i<qnt;i++){
		if(v[i].dif<0)
			cout << v[i].nome << " " << v[i].dif << endl;
	}
	for(int i=0;i<qnt;i++){
		if(v[i].dif>=0)
			cout << v[i].nome << " " << v[i].dif << endl;
	}
	return 0;
}