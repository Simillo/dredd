#include <iostream>
#include <fstream>
using namespace std;

int main(){

	string nome, que;
	cin >> nome >> que;
	ofstream saida(nome.c_str());
	saida << que << endl;
	saida.close();
}
