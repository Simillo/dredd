#include <iostream>
#include <fstream>
using namespace std;

typedef struct{
	string nome;
	int mat;
	float nota[3];
	float media;
} DadosAluno;

int main()
{
	ofstream saida("alunos.txt");
    DadosAluno dados[3];

	string vs[3];
    for(int i=0;i<3;i++){
		cin >> dados[i].nome >> dados[i].mat;
		dados[i].media = 0;
		for(int j=0;j<3;j++){
			cin >> dados[i].nota[j];
			dados[i].media += dados[i].nota[j];
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(dados[i].media > dados[j].media){
				float f = dados[i].media;
				dados[i].media = dados[j].media;
				dados[j].media = f;
				int m = dados[i].mat;
				dados[i].mat = dados[j].mat;
				dados[j].mat = m;
				string s = dados[i].nome;
				dados[i].nome = dados[j].nome;
				dados[j].nome = s; 
			}
		}
	}
	for(int i=0;i<3;i++)
		saida << dados[i].nome << endl << dados[i].mat << endl;
	saida.close();
    return 0;
}
