#include <iostream>

using namespace std;

int main(){

	int l,c;
	
	cin>>l>>c;
	
	int m[l][c],t[c][l];
	
	for(int i=0;i<l;i++)
		for(int j=0;j<c;j++)
			cin>>m[i][j];
	
	for(int i=0;i<c;i++)
		for(int j=0;j<l;j++)
			t[i][j] = m[j][i];
	
	
	for(int i=0;i<c;i++){
		for(int j=0;j<l;j++)
			cout<<t[i][j]<<" ";
		cout<<endl;
	}
			
	return 0;
}
