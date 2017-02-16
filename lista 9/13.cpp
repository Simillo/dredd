#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ofstream saida("arvore.ps");

void path(double x1, double y1, double ang, double tamanho, double qnt){
	if (qnt != 0){
		saida << x1 << " " << y1 << " motevo" << endl;
		double x2 = cos(ang) * tamanho + x1;
		double y2 = sin(ang) * tamanho + y1;
		saida << x2 << " " << y2 << " lineto" << endl;
		path(x2, y2, ang + 0.26,tamanho-tamanho/10, qnt - 1);
		path(x2, y2, ang - 0.26,tamanho-tamanho/10, qnt - 1);
	}
}

int main(){
	double tamanho, qnt;
	cin >> tamanho >> qnt;

	double ang = 1.5708;
	double x = 300, y = 10;

	saida << "newpath" << endl;
	path(x,y,ang,tamanho,qnt);
	saida << "2 setlinewidth" << endl << "stroke";
	saida.close();
	return 0;
}