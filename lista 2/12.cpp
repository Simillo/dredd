#include <iostream>

using namespace std;

int main(){
	
	float valor,desconto;
	int cod;
	
	cin>>valor>>cod;
	
	if(valor<=30)
		cout<<0<<endl<<valor<<endl;
	else if(valor>30&&valor<=100){
		desconto = valor/100*10;
		cout<<desconto<<endl<<valor-desconto<<endl;
	}else{
		desconto =valor/100*15;
		cout<<desconto<<endl<<valor-desconto<<endl;
	}
	
	
	return 0;
}
