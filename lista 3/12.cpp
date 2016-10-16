#include <iostream>

using namespace std;

int main(){
	
	float s = 0, maior, segundo, n, aux;
	
	cin>>maior>>segundo;
	if(segundo>maior){
		aux = maior;
		maior = segundo;
		segundo = aux;
	}
	s=maior+segundo;
	for(int i=2;i<7;i++){
		cin>>n;
		if(n>maior){
			aux = maior;
			maior = n;
			segundo = aux;
		}
		else if(n>segundo)
			segundo = n;
		s+=n;
	}
	cout<<maior<<endl<<segundo<<endl<<(s-maior-segundo)/5.0<<endl;
	return 0;
}
