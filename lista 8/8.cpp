#include <iostream>
#include <fstream>
using namespace std;

int f(int n){
	return n<2?1:n*f(n-1);
}

int main(){
	int n;

	ifstream file;
	file.open("entrada.txt");
	if(file.is_open()){
		while(!file.eof())
			file >> n;
	}
	file.close();

	ofstream outfile("saida.txt");
	outfile << f(n) << endl;
	outfile.close();
}