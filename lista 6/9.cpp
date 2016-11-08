#include <iostream>
#include <cstring>


using namespace std;

typedef struct 
{
	char nome[20];
	char esporte[20];
	int idade;
	float altura;
} Reg;

int main(){

	Reg v[5];

	for(int i=0;i<5;i++)
		cin >> v[i].nome >> v[i].esporte >> v[i].idade >> v[i].altura;

	float alto = 0.0;
	int velho = 0;

	char na[20], ea[20], nv[20], ev[20];

	for(int i=0;i<5;i++){
		if(v[i].altura>alto){
			alto = v[i].altura;
			strcpy(na,v[i].nome);
			strcpy(ea,v[i].esporte);
		}
		if(v[i].idade>velho){
			velho = v[i].idade;
			strcpy(nv,v[i].nome);
			strcpy(ev,v[i].esporte);
		}
	}

	cout << na << " " << ea << endl << nv << " " << ev << endl;

	return 0;
}