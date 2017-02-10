nclude <iostream>
#include <fstream>
using namespace std;

int main()
{
    string e,s;
    cin >> e >> s;
    ifstream entrada(e.c_str());
    string pala, re = "";
    while(entrada >> pala)
		re+=pala;
	ofstream saida(s.c_str());
	saida << re << endl;
	saida.close();
	entrada.close();
	return 0;
}

