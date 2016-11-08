#include <iostream>
using namespace std;

int main(){
	
	int caixas[2][5][3], somadia = 0, somacaixa = 0;
	
	for(int c = 0;c<2;c++){
		for(int d = 0;d<5;d++)
			for(int p = 0;p<3;p++)
				cin >> caixas[c][d][p];
	}
	
	
	for(int c = 0;c<2;c++){
		for(int d = 0;d<5;d++){
			for(int p = 0;p<3;p++){
				somadia += caixas[c][d][p];
			}
			cout<<somadia<<endl;
			somacaixa += somadia;
			somadia = 0;
		}
		cout<<somacaixa<<endl;
		somacaixa = 0;
	}
	
	
	return 0;
}
