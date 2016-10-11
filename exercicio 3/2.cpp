#include <iostream>

using namespace std;

int main(){
	int n,b,h=0,c=1;
	
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>b;
		if(b==i&&c){
			h=i;
			c=0;
		}
	}
	
	cout<<h<<endl;
	
	return 0;
}
