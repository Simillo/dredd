#include <iostream>

using namespace std;

int main(){
	float salario_base,impostos,gratificacao,salario_liquido = 0;
	int tempo_servico;
	char categoria;
	

	cin>>salario_base>>tempo_servico;


	if(salario_base<200)
		impostos = 0;
	else if(salario_base>=200&&salario_base<=450)
		impostos = salario_base/100*3;
	else if(salario_base>450&&salario_base<700)
		impostos = salario_base/100*8;
	else
		impostos = salario_base/100*12;
	

	if(salario_base<=500){
		if(tempo_servico<=3)
			gratificacao = salario_base/100*23;
		else if(tempo_servico>3&&tempo_servico<6)
			gratificacao = salario_base/100*35;
		else
			gratificacao = salario_base/100*33;
	}else{
		if(tempo_servico<=3)
			gratificacao = salario_base/100*20;
		else
			gratificacao = salario_base/100*30;
	}

	salario_liquido = salario_base - impostos + gratificacao;

	if(salario_liquido<350)
		categoria = 'A';
	else if(salario_liquido>=350&&salario_liquido<600)
		categoria = 'B';
	else
		categoria = 'C';

	cout<<impostos<<endl;
	cout<<gratificacao<<endl;
	cout<<salario_liquido<<endl;
	cout<<categoria<<endl;

	return 0;
}