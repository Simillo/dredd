#include <iostream>

using namespace std;

int main(){
	
	int quantidade;
	
	while(cin>>quantidade){
		
		if(!quantidade)
			break;
		
		for(int i=0;i<quantidade;i++){
			
			int c=0,h=0;
			
			for(int j=0;j<5;j++){
				int nota;
			
				cin>>nota;
			
				if(nota<128){
					c++;
					h = j+1;
				}
			}
			
			if(c>1)
				cout<<"*"<<endl;
			else
				cout<<char(h+64)<<endl;
			
		}
	}
	
	
	return 0;
}
