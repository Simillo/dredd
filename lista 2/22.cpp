#include <iostream>

using namespace std;

int main(){
	
	int c;
	float sal,au;
	
	cin>>c>>sal;
	
	if(c==1){
		au = sal/100*50;
		cout<<"Escriturario"<<endl;
		
	}
	else if(c==2){
		au = sal/100*35;
		cout<<"Secretario"<<endl;
		
	}
	else if(c==3){
		au = sal/100*20;
		cout<<"Caixa"<<endl;
		
	}
	else if(c==4){
		au = sal/100*10;
		cout<<"Gerente"<<endl;
		
	}
	else{
		au = 0;
		cout<<"Diretor"<<endl;
	}
	
	cout<<au<<endl;
	cout<<au+sal<<endl;
	
	return 0;
}
