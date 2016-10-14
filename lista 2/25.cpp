#include <iostream>

using namespace std;

int main(){
	
	int i;
	
	cin>>i;
	
	if(i<5)
		cout<<"Nao registrado"<<endl;
		
	else if(i>=5&&i<=7)
		cout<<"Infantil"<<endl;
		
	else if(i>=8&&i<=10)
		cout<<"Juvenil"<<endl;
		
	else if(i>=11&&i<=15)
		cout<<"Adolescente"<<endl;
		
	else if(i>=16&&i<=30)
		cout<<"Adulto"<<endl;
		
	else if(i>30)
		cout<<"Senior"<<endl;
	
	return 0;
}
