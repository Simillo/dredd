#include <iostream>
using namespace std;

typedef struct{
	int Id;
	string Desc;
	float Preco;
} Produtos;

void j(Produtos v[], int ini, int meio, int fim, Produtos aux[]){
	int esq = ini;
	int dir = meio;
	for(int i=ini;i<fim;i++){
		if((esq < meio)&&((dir>=fim)||(v[esq].Preco < v[dir].Preco))){
			aux[i].Preco = v[esq].Preco;
			aux[i].Id = v[esq].Id;
			aux[i].Desc = v[esq].Desc;
			esq++;
		}else{
			aux[i].Preco = v[dir].Preco;
			aux[i].Id = v[dir].Id;
			aux[i].Desc = v[dir].Desc;
			dir++;
		}
	}
	for(int i=ini;i<fim;i++){
		v[i].Preco = aux[i].Preco;
		v[i].Id = aux[i].Id;
		v[i].Desc = aux[i].Desc;
	}
}
void ms(Produtos v[], int ini, int fim, Produtos aux[]){
	if((fim-ini)>1){
		int meio = (ini+fim)/2;
		ms(v,ini,meio,aux);
		ms(v,meio,fim,aux);
		j(v,ini,meio,fim,aux);
	}
}
void ms(Produtos v[], int t){
	Produtos aux[t];
	ms(v,0,t,aux);
}
int main()
{
	int n;
	cin >> n;
	Produtos p[n];
	for(int i=0;i<n;i++){
		cin >> p[i].Id;
		
		cin.ignore(1,'\n');
		getline(cin, p[i].Desc);
		
		cin >> p[i].Preco;
	}
	int mi,ma;
	cin.ignore(1,'\n');
	cin >> mi >> ma;
	ms(p,n);
	for(int i=0;i<n;i++){
		if(p[i].Preco >= mi && p[i].Preco <=ma)
			cout << p[i].Id << " \"" << p[i].Desc << "\" " << p[i].Preco << endl;
	}
	return 0;
}
