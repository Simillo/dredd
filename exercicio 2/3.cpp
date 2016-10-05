#include <iostream>

using namespace std;
/*
dando erraddo

nao usar

*/
int main(){
	
	int t,v;
	
	float total;
	
	cin>>t>>v;
	
	if(t==1){
		total = (v*0.5)/100+v;
		cout<<total<<endl;
	}
	else{
		v-=30;
		total = (v*3)/100+v;
		cout<<total<<endl;
	}
	return 0;	
}
