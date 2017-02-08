#include <iostream>
#include <fstream>
using namespace std;

typedef struct {
	int mat;
	double n1,n2,n3,n4;
	double m;
} Notas;
int main()
{
    
    ifstream entrada("alunos.txt");
	
	
    int n, q = 0;
    
    entrada >> n;
    
    double meRep[n];
    
    int maRep[n];
    
	Notas notas[n];
	int c=0;
	
	for(int i = 0; i < n; i++){
		double soma = 0;
		entrada >> notas[i].mat;
		entrada >> notas[i].n1;
		entrada >> notas[i].n2;
		entrada >> notas[i].n3;
		entrada >> notas[i].n4;
		soma += notas[i].n1;
		soma += notas[i].n2;
		soma += notas[i].n3;
		soma += notas[i].n4;
		notas[i].m = soma;
		if(notas[i].m/4.0 < 60){
			meRep[q] = notas[i].m/4.0;
			maRep[q] = notas[i].mat;
			q++;
			c++;
		}
	}
	
	ofstream saida("recupera.txt");
	
	for(int i=0;i<q-1;i++){
		for(int j=0;j<q-i-1;j++){
			if(meRep[j] < meRep[j+1]){				
				double sw = meRep[j];
				meRep[j] = meRep[j+1];
				meRep[j+1] = sw;
				int ma = maRep[j];
				maRep[j] = maRep[j+1];
				maRep[j+1] = ma;
			}
		}
	}
	for(int i=0;i<q;i++){
		saida << maRep[i] << endl;
	}
	if(!c)
		saida << -1 << endl;
		
	saida.close();
	entrada.close();

    return 0;
}
