#include <iostream>

using namespace std;

int main(){
	int antigo,atual,r=1;
	
	cin>>atual;
	
	antigo=atual;
	
	for(int i=1;i<5;i++){
		cin>>atual;
		if(atual<antigo)
			r = 0;
	}	
	
	cout<<r<<endl;
	return 0;	
}
