#include <iostream>

using namespace std;

typedef struct
{
	int dia;
	int mes;
	int ano;
} Data;

typedef struct
{
	int cod;
	char animal[50];
	char dono[50];
	Data data;
} Cadastro;

int main(){

	int cod, c = 0;

	Cadastro cad[100];

	cod = 1;

	while(cod!=0){
		cin >> cod;
		if(cod!=0){
			cin >> cad[c].animal >> cad[c].dono >> cad[c].data.dia >> cad[c].data.mes >> cad[c].data.ano;
			cad[c].cod = cod;
			c++;
		}
	}
	int busca;
	cin >> busca;

	int inicio = 0, meio, fim = c-1, achou=0;
	while(!achou && inicio <= fim){
		meio = (inicio+fim)/2;
		if(busca > cad[meio].cod)
			inicio = meio+1;
		else if(busca<cad[meio].cod)
			fim = meio-1;
		else
			achou = 1;
	}

	if(inicio>fim || !achou)
		cout << "inexistente" << endl;
	else
		cout << cad[meio].animal << " " << cad[meio].data.dia << "/" << cad[meio].data.mes << "/" << cad[meio].data.ano << endl;

	return 0;
}

