#include <iostream>

using namespace std;

int main(){
	
	int n1,n2;
	
	cin>>n1>>n2;
	
	float v1[n1],v2[n2];
	
	for(int i=0;i<n1;i++)
		cin>>v1[i];
	for(int i=0;i<n2;i++)
		cin>>v2[i];
		
	for(int i=0;i<n2;i++){
		for(int j=0;j<n1;j++){
			if(v1[j]==v2[i])
				cout<<v1[j]<<" ";
		}
	}
	return 0;
}
