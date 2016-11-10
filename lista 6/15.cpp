#include <iostream>
#include <cstring>

using namespace std;
typedef struct
{
	char cristal[100];
	char cor[100];
} Sabre;
typedef struct
{
	char nome[100];
	char hierarquia[100];
	Sabre sabre;
} Jedi;
typedef struct
{
	char h[100];
	int q;
} Helper;

int main(){
	int qnt,cont = 0;

	cin >> qnt;

	Jedi jedi[qnt];
	Helper helper[qnt];

	for(int i=0;i<qnt;i++){
		cin >> jedi[i].nome >> jedi[i].hierarquia >> jedi[i].sabre.cristal >> jedi[i].sabre.cor;
		int v = 1;
		for(int j=0;j<cont;j++){
			if(strcmp(jedi[i].hierarquia,helper[j].h)==0){
				v=0;
			}
		}
		if(v){
			strcpy(helper[cont].h,jedi[i].hierarquia);
			helper[cont].q = 0;
			cont++;
		}
	}

	char busca[100];
	cin >> busca;

	for(int i=0;i<qnt;i++){
		if(strcmp(jedi[i].sabre.cor,busca)==0){
			for(int j=0;j<cont;j++){
				if(strcmp(jedi[i].hierarquia,helper[j].h)==0){
					helper[j].q++;
				}
			}
		}
	}
	for(int i=0;i<cont;i++){
		cout << helper[i].h << " " << helper[i].q << endl;
	}
	return 0;
}