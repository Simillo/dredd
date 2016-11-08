#include <iostream>
#include <cstring>

using namespace std;


typedef struct
{
	char empresa[50];
	char operacao[50];	
} REO;

typedef struct 
{
	char operacao[50];
	char nome[50];
	int desvio;
} ROND;


int main(){

	int qntempresas;

	cin >> qntempresas;

	REO vo[qntempresas];

	for(int i=0;i<qntempresas;i++)
		cin >> vo[i].empresa >> vo[i].operacao;

	int qntoperacao;

	cin >> qntoperacao;

	ROND vn[qntoperacao];

	for(int i = 0;i<qntoperacao;i++)
		cin >> vn[i].operacao >> vn[i].nome >> vn[i].desvio;

	char empresabusca[50], nomebusca[50];
	cin >> empresabusca >> nomebusca;
	int soma = 0;

	for(int i=0;i<qntoperacao;i++)
		if (strcmp(vn[i].nome,nomebusca)==0)	
			for(int j=0;j<qntempresas;j++)
				if(strcmp(vn[i].operacao,vo[j].operacao)==0&&strcmp(vo[j].empresa,empresabusca)==0)
					soma+=vn[i].desvio;

	cout << soma << endl;
	return 0;
}