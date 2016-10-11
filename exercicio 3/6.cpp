#include <iostream>

using namespace std;

int main(){
	int n1,n2,s=0;
	
	cin>>n1>>n2;
	
	for(int i=0;i<n2;i++){
		s+=n1;
		cout<<s<<endl;
	}
	
	return 0;
}
