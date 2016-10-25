#include <iostream>

using namespace std;

int main(){
	int m[4][6],n[6][4];
	
	for(int i=0;i<4;i++)
		for(int j=0;j<6;j++)
			cin>>m[i][j];
		
	for(int i=0;i<6;i++)
		for(int j=0;j<4;j++)
			cin>>n[i][j];
	
	for(int i=0;i<6;i++)
		for(int j=0;j<4;j++)
			cout<<m[j][i] + n[j][i]<<endl;
	
	
	return 0;
}
