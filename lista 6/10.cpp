#include <iostream>
#include <cstring>
using namespace std;

typedef struct 
{
	char nome[100];
	char brinquedo[100];
} Cartinha;

typedef struct 
{
	char brinquedo[100];
	int qnt;
	int qntpedidos;
} Brinquedo;

int main(){

	int qntcartas;
	cin>>qntcartas;

	Cartinha vcartinhas[qntcartas];

	for(int i=0;i<qntcartas;i++)
		cin >> vcartinhas[i].nome >> vcartinhas[i].brinquedo;

	int qntbrinquedo;
	cin >> qntbrinquedo;

	Brinquedo vbrinquedo[qntbrinquedo];

	for(int i=0;i<qntbrinquedo;i++){
		cin>>vbrinquedo[i].brinquedo >> vbrinquedo[i].qnt;
		vbrinquedo[i].qntpedidos = 0;
	}

	for(int i=0;i<qntbrinquedo;i++){
		for(int j=0;j<qntcartas;j++){
			if(strcmp(vbrinquedo[i].brinquedo,vcartinhas[j].brinquedo)==0){
				vbrinquedo[i].qntpedidos++;
			}
		}
	}
	for(int i=0;i<qntbrinquedo;i++){
		if(vbrinquedo[i].qnt < vbrinquedo[i].qntpedidos)
			cout << vbrinquedo[i].brinquedo << " ";
	}

	return 0;
}