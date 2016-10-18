#include <iostream>

using namespace std;

int main(){
	
	int v[10],n;
	
	for(int i=0;i<10;i++)
		v[i] = 0;
		
	cin>>n;
	
	for(int i=0;i<n;i++)
		cin>>v[i];
		
	int p;
	
	cin>>n>>p;
	
	for(int i=9;i>=p;i--){
		if(i==9)
			continue;
		else
			v[i+1] = v[i];
	}
	v[p] = n;
	
	for(int i=0;i<10;i++)
		cout<<v[i]<<" ";
	return 0;
}
