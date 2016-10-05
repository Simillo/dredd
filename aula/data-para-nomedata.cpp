#include <iostream>

using namespace std;

int main(){

	int d,m,a;
	
	cin>>d>>m>>a;
	
	switch(d){
		case 1:
			cout<<"Primeiro";break;
		case 2:
			cout<<"Segundo";break;
		case 3:
			cout<<"Terceiro";break;
		case 4:
			cout<<"Quatro";break;
		case 5:
			cout<<"Cinco";break;
		case 6:
			cout<<"Seis";break;
		case 7:
			cout<<"Sete";break;
		case 8:
			cout<<"Oito";break;
		case 9:
			cout<<"Nove";break;
		case 10:
			cout<<"Dez";break;
		case 11:
			cout<<"Onze";break;
		case 12:
			cout<<"Doze";break;
		case 13:
			cout<<"Treze";break;
		case 14:
			cout<<"Catorze";break;
		case 15:
			cout<<"Quinze";break;
		case 16:
			cout<<"Dezesseis";break;
		case 17:
			cout<<"Dezessete";break;
		case 18:
			cout<<"Dezoito";break;
		case 19:
			cout<<"Dezenove";break;
		case 20:
			cout<<"Vinte";break;
		default:break;
	}
	
	if(d>20&&d<30)
		cout<<"Vinte e ";	
	if(d==30)
		cout<<"Trinta";
	else if(d==31)
		cout<<"Trinta e um";
		
	switch(d){
		case 21:
			cout<<"um";break;
		case 22:
			cout<<"dois";break;
		case 23:
			cout<<"tres";break;
		case 24:
			cout<<"quatro";break;
		case 25:
			cout<<"cinco";break;
		case 26:
			cout<<"seis";break;
		case 27:
			cout<<"sete";break;
		case 28:
			cout<<"oito";break;
		case 29:
			cout<<"nove";break;
		default:break;
	}
	
	cout<<" de ";
	
	switch(m){
		case 1:
			cout<<"Janeiro";break;
		case 2:
			cout<<"Fevereiro";break;
		case 3:
			cout<<"Marco";break;
		case 4:
			cout<<"Abril";break;
		case 5:
			cout<<"Maio";break;
		case 6:
			cout<<"Junho";break;
		case 7:
			cout<<"Julho";break;
		case 8:
			cout<<"Agosto";break;
		case 9:
			cout<<"Setembro";break;
		case 10:
			cout<<"Outubro";break;
		case 11:
			cout<<"Novembro";break;
		case 12:
			cout<<"Dezembro";break;
		default:break;
	}
	
	cout<<" de "<<a<<endl;	
	
	return 0;
}

