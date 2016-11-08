#include <iostream>

using namespace std;

int main(){
	
	int A[5],B[5],n;
	for(int i=0;i<5;i++){
		cin>>n;
		A[i] = n;
	}
	for(int i=0;i<5;i++){
		cin>>n;
		B[i] = n;
	}
	int c=4,s=0;
	for(int i=0;i<5;i++){
		s+=(A[i]-B[c]);
		c--;
	}
	
	cout<<s<<endl;
	
	return 0;
}
