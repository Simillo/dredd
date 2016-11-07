#include <iostream>

using namespace std;

int main(){
	int antigo, atual,h = 1;
	
	cin>>atual;
	
	for(int i=1;i<5;i++){
		antigo = atual;
		
		cin>>atual;
		
		if(atual<antigo)
			h=0;
	}
	
	cout<<h<<endl;
	return 0;	
}
