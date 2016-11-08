#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int v[n];
	
	for(int i=0;i<n;i++)
		cin>>v[i];
	
	int h = 1;
	
	for(int i = 0 ; i < n ; i++){
		if(v[i]!=v[(n-1)-i])
			h=0;
	}
	
	cout<<h<<endl;
	return 0;
}
