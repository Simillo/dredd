#include <iostream>

using namespace std;

int main(){
	
	int cod, qnt, val_bruto,preco_un;
	float val_desconto, final;

	cin>>cod>>qnt;
	
	if(cod>=1&&cod<=10){
		val_bruto = 10*qnt;
		preco_un = 10;
	}
	else if(cod>=11&&cod<=20){
		val_bruto = 15*qnt;
		preco_un = 15;
	}
	else if(cod>=21&&cod<=30){
		val_bruto = 20 * qnt;
		preco_un = 20;
	}
	else{
		val_bruto = 30 * qnt;
		preco_un = 30;
	}

	if(val_bruto<=250)
		val_desconto = val_bruto/100*5;
	else if(val_bruto>250&&val_bruto<=500)
		val_desconto = val_bruto/100*10;
	else
		val_desconto = val_bruto/100*15;

	final = val_bruto - val_desconto;

	cout<<preco_un<<endl;
	cout<<val_bruto<<endl;
	cout<<val_desconto<<endl;
	cout<<final<<endl;


	return 0;
}
