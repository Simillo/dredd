#include <iostream>

using namespace std;

int main(){
	char l,ca=0,cb=0;
	
	for(int i=0;i<10;i++){
		cin>>l;
		
		if(l=='a')
			ca++;
		else
			cb++;
	}
	
	cout<<(ca<cb)<<endl;
	return 0;
}
