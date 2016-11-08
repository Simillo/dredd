#include <iostream>

using namespace std;

int main(){
	
	int v1[10],v2[5],c,n;
	
	for(int i=0;i<10;i++){
		cin>>n;
		v1[i] = n;
	}
	for(int i=0;i<5;i++){
		cin>>n;
		v2[i] = n;
	}
	
	for(int i=0;i<10;i++){
		c=0;
		for(int j=0;j<5;j++){
			if(v1[i]%v2[j]==0){
				c++;
			}
		}
		cout<<v1[i]<<" "<<c<<endl;
	}


	return 0;
}
