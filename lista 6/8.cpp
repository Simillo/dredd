#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct {
	int tipo;
	float preco;
	int qnt;
	char dep[9];
} Controle;

int main()
{
	vector<Controle> vetor;
	vector<int> busca;
	int cod = 1;
	while(cod!=0){
		cin >> cod;
		if(cod!=0){
			Controle aux;
			aux.tipo = cod;
			cin >> aux.preco >> aux.qnt >> aux.dep;
			vetor.push_back(aux);
		}
	}
	cod = 1;
	while(cod!=0){
		cin >> cod;
		if(cod!=0){
			busca.push_back(cod);
		}
	}
	int menorqnt = vetor[0].qnt ,h=1,t=0;
	
	for(int i=0;i<(int)vetor.size();i++){
		for(int j=0;j<(int)busca.size();j++){
			if(busca[j] == vetor[i].tipo){
				if((vetor[i].qnt - 1)>=0)
					vetor[i].qnt -=1;
				else
					h=0;
			}
		}
	}
	if(h){
		for(int i=0;i<(int)vetor.size();i++){
			if(vetor[i].qnt < menorqnt){
				t = i;
				menorqnt = vetor[i].qnt;
			}
		}
		cout << vetor[t].tipo << " " << vetor[t].qnt << " " << vetor[t].dep << endl;
	}else
		cout << "erro 3221" << endl;
    return 0;
}
