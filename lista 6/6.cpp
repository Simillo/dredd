#include <iostream>

using namespace std;

typedef struct 
{
	float pi;
	float pf;
	float vi;
	float vf;
} Dados;

int main(){

	float tempo;
	Dados d;
	cin >> d.pi >> d.pf >> d.vi >> d.vf >> tempo;

	d.pi = ((d.vi/(1.0/tempo))+d.pi);
	d.pf = ((d.vf/(1.0/tempo))+d.pf);

	cout<<d.pi<<" " << d.pf << endl;

	return 0;
}
