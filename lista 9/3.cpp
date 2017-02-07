#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
	vector<string> va;
	vector<string> vb;

	string txt;

	int c = 0;

	ifstream arq1("arquivoA.txt");
	ifstream arq2("arquivoB.txt");
	
	while(arq1 >> txt){
		va.push_back(txt);
		c++;
	}
	while(arq2 >> txt)
	    vb.push_back(txt);

	ofstream saida("arquivoC.txt");

	for(int i = 0; i < c; i++)
		saida << va[i] << " " << vb[i] << " ";

	saida.close();
	arq2.close();
	arq1.close();
	
	return 0;
}
