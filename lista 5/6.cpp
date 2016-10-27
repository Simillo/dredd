#include <iostream>

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	int m[n][n];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>m[i][j];
			
	int menor = m[0][0],linha = 0;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(m[i][j]<menor){
				linha = i;
				menor = m[i][j];
			}
			
	cout<<linha<<endl;

	return 0;	
}

