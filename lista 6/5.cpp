#include <iostream>
using namespace std;

typedef struct 
{
	char sexo;
	int idade;
	char res;
} Dados;


int main(){

	int qnt;

	cin >> qnt;

	Dados v[qnt];

	for (int i=0;i<qnt;i++)
		cin >> v[i].sexo >> v[i].idade >> v[i].res;

	int s,n,g,ng,fn,mg;

	s  = 0;
	n  = 0;
	g  = 0;
	ng = 0;
	fn = 0;
	mg = 0;

	for(int i=0;i<qnt;i++){
		if(v[i].res == 'S'){
			s++;
			if(v[i].idade >= 18)
				g++;
			if(v[i].sexo == 'M' && v[i].idade < 18)
				mg++;
		}
		else{
			n++;
			if(v[i].idade < 18)
				ng++;
			if(v[i].sexo == 'F' && v[i].idade >=18)
				fn++;
		}

	}

	cout << s << endl << n << endl << g << endl << ng << endl << fn << endl << mg << endl; 

	return 0;
}