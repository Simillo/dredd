#include <iostream>

using namespace std;

int main(){
	
	float s,a=0;
	
	cin>>s;
	
	if(s<=300){
		a = s/100*15;
		cout<<a<<endl;
		cout<<s+a<<endl;
	}else if(s>300&&s<=600){
		a = s/100*10;
		cout<<a<<endl;
		cout<<s+a<<endl;
	}else if(s>600&&s<=900){
		a = s/100*5;
		cout<<a<<endl;
		cout<<s+a<<endl;
	}else{
		cout<<a<<endl;
		cout<<s+a<<endl;
	}
	
	return 0;
}
