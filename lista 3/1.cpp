#include <iostream>


using namespace std;

int main(){
	
	int i=0,j=0;
	
	while(i++<10){
		while(j++<10){
			cout<<i<<" x "<<j<<" = "<<i*j<<endl;
		}
		j=0;
	}
	return 0;
}
