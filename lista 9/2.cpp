nclude <iostream>
#include <fstream>
using namespace std;

int main(){
	string nome, conteudo;
	cin >> nome;
	ifstream arq(nome.c_str());
	arq >> conteudo;
	arq.close();
	cout << conteudo << endl;
	return 0;
}
