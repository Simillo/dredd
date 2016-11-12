#include <iostream>
#include <cmath>

using namespace std;

typedef struct
{
	float x;
	float y;
} Ponto;


int main(){
	int rota[5];
	Ponto ponto[5];
	for(int i=0;i<5;i++)
		cin >> ponto[i].x >> ponto[i].y;

	for(int i=0;i<5;i++)
		cin >> rota[i];


	float somay,somax,somatotal = 0.0,media;
	
	for(int i=1;i<5;i++){
		somay = pow((ponto[rota[i]].y - ponto[rota[i-1]].y),2);
		somax = pow((ponto[rota[i]].x - ponto[rota[i-1]].x),2);

		media = sqrt(somay+somax);

		somatotal += media;
	}

	cout << somatotal << endl;
	
	return 0;
}
