#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ofstream saida("saida.ps");
bool path(double x, double y, double angx, double angy, double tam, int qnt,int c){
	if(qnt == 0){
		return true;
	}
	saida << x << " " << y << " moveto" << endl;
	x = cos(angx)*tam+x;
	y = sin(angy)*tam+y;
	saida << x << " " << y << " lineto" << endl;
	tam = tam - tam/10.0;
	return path(x,y,angx-0.26,angy+0.26,tam,qnt-1,c+1);
}

int main(){
	double tamanho, quantidade;
	cin >> tamanho >> quantidade;

	double ang = 1.5708;
	double x = 300, y = 10;
	int c = 1;
	saida << "newpath" << endl;
	path(x,y,ang,ang,tamanho,quantidade,c);
	saida << "2 setlinewidth" << endl << "stroke";
	saida.close();
	return 0;
}