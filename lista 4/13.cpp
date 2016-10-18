#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,indexmaior=0,indexmenor=0,indexcentral=0;
	
	cin>>n;
	
	float v[n],maior,menor,central;
	
	for(int i=0;i<n;i++)
		cin>>v[i];

	maior = menor = v[0];

	if(n<3){
		indexcentral=-1;
		central =-1;
	}else{
		indexcentral = ceil(n/2);
		central = v[indexcentral];
	}
	
	for(int i=0;i<n;i++){
		if(v[i]<menor){
			menor = v[i];
			indexmenor = i;
		}else if(v[i]>maior){
			maior = v[i];
			indexmaior = i;
		}
	}
	cout<<maior<<endl<<menor<<endl<<central<<endl<<indexmaior<<endl<<indexmenor<<endl<<indexcentral<<endl;
	return 0;
}
