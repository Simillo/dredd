#include <iostream>
#include <string>
using namespace std;

string mes(int i){
	switch(i){
		case 0:
			return"janeiro";
		case 1:
			return"fevereiro";
		case 2:
			return"marco";
		case 3:
			return"abril";
		case 4:
			return"maio";
		case 5:
			return"junho";
		case 6:
			return"julho";
		case 7:
			return"agosto";
		case 8:
			return"setembro";
		case 9:
			return"outubro";
		case 10:
			return"novembro";
		case 11:
			return"dezembro";
		default:
			break;
	}
}

int main(){
	
	float v[12],maior,menor,imaior,imenor;
	
	for(int i=0;i<12;i++)
		cin>>v[i];
	
	maior = menor = v[0];
	
	for(int i=0;i<12;i++)
		if(v[i]>maior){
			maior = v[i];
			imaior = i;
		}
		else if(v[i]<menor){
			menor = v[i];
			imenor = i;
		}
		
	cout<<mes(imaior)<<endl<<mes(imenor)<<endl;
	
	return 0;
}
