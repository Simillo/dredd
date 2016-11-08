#include <iostream>

using namespace std;

int existe(int v[],int n){
	for (int i=0;i<10;i++)
		if(v[i]==n)
			return 1;
			
	return 0;
}


int main(){

	int v1[15],v2[10];
	
	for(int i=0;i<15;i++)
		cin>>v1[i];
	for(int i=0;i<10;i++)
		cin>>v2[i];
	
	for(int i=0;i<15;i++){
		if(existe(v2,v1[i]))
			cout<<v1[i]<<endl;
	}	
	return 0;
}
