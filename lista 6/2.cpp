#include <iostream>
#include <cstring>
#include <vector>
#include <string>

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
	
	vector<float> vetorfloat;
	vector<string> vetorstring;
	vector<int> vetorindex;
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
			vetorfloat.push_back(-(v[i].peso -(72.7 * v[i].altura - 58.0)));
			vetorstring.push_back(v[i].nome);
		}else{
			vetorfloat.push_back(-(v[i].peso -(62.1 * v[i].altura - 44.7)));
			vetorstring.push_back(v[i].nome);
		}
	}
	for(int i=0;i<(int)vetorfloat.size();i++){
		if(vetorfloat[i] < 0){
			cout << vetorstring[i]<< " " << vetorfloat[i] << endl;
		}else{
			vetorindex.push_back(i);
		}
	}
	for(int i=0;i<(int)vetorindex.size();i++)
		cout << vetorstring[vetorindex[i]]<< " " << vetorfloat[vetorindex[i]] << endl;
	return 0;
}