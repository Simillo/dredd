#include <iostream>

using namespace std;

int main(){
	float r,t=1;
	int n;
	
	cin>>r>>n;
	
	for(int i=0;i<n;i++){
		cout<<t<<endl;
		t*=r;
	}
	
	
	return 0;
}
