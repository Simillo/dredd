#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int numero, posicao;
	float metade;

	cin>>numero>>posicao;

	if(numero%2)
		metade = ceil(numero/2);
	else
		metade = numero/2+1;

	
	return 0;
}
