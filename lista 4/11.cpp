#include <iostream>

using namespace std;

int indexOf(char v[],int s,int c){
	for(int i=0;i<s;i++){
		if(v[i]==c)
			return i;
	}
	return -1;
}

int main(){
	int n,ind1,ind2;
	
	cin>>n;
	char c1, c2,v[n];
	
	for(int i=0;i<n;i++)
		cin>>v[i];
	
	cin>>c1>>c2;
	ind1 = indexOf(v,n,c1);
	ind2 = indexOf(v,n,c2);
	
	for(int i=ind1+1;i<ind2;i++)
		cout<<v[i]<<" ";
	return 0;
}
