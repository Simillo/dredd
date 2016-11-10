#include <iostream>
using namespace std;

typedef struct
{
	float salario;
	int idade;
	int filhos;
} Censo;

int main(){
	int qnt;
	float c=0.0;
	cin >> qnt;
	Censo censo[qnt];
	for(int i=0;i<qnt;i++)
		cin >> censo[i].salario >> censo[i].idade >> censo[i].filhos;

	float ss = 0, sf = 0, maior = 0;

	for(int i=0;i<qnt;i++){
		if (censo[i].salario > maior)
			maior = censo[i].salario;

		if(censo[i].salario > 1000)
			c+=1.0;

		ss += censo[i].salario;
		sf += censo[i].filhos;
	}

	cout << ss/qnt << endl << sf/qnt << endl << maior << endl << (c/qnt*100) << '%' << endl; 
	return 0;
}