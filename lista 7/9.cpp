#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

typedef struct
{
	char nome[100];
	float ali;
} Aliquota;

typedef struct
{
	char item[100];
	int valor;
	char ali[100];
} Nota;

vector<Aliquota> aliquota;
vector<Nota> nota;
Aliquota auxali;
Nota auxnota;

float soma = 0;

void lerAliquota(){
	cin >> auxali.nome >> auxali.ali;
	aliquota.push_back(auxali); 
}

void lerNota(){
	cin >> auxnota.item >> auxnota.valor >> auxnota.ali;
	nota.push_back(auxnota);
}

float calc(int v, float a){
	return v*a;
}

void so(float q){
	soma+=q;
}

int main(){
	int n1,n2;
	cin >> n1;

	for (int i = 0; i < n1; i++)
		lerAliquota();

	cin >> n2;
	
	for (int i = 0; i < n2; i++)
		lerNota();

	for (int i = 0; i < n1; i++)
		for (int j = 0; j < n2; j++)
			if(strcmp(aliquota[i].nome,nota[j].ali)==0)
				so(calc(nota[j].valor,aliquota[i].ali));
	
	cout << soma << endl;
	return 0;
}
