#include <iostream>

using namespace std;

int main(){
	int m[10][10];
	
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			cin>>m[i][j];		
	
	int r[10][10];
	
	//linha 2 com linha 8
	
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			r[i][j] = m[i][j];
	
	
	for(int i=0;i<10;i++){
		r[1][i] = m[7][i];
		r[7][i] = m[1][i];
	}
	
	cout<<"1."<<endl;
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
			cout<<r[i][j]<<" ";
		cout<<endl;
	}
	
	//coluna 4 com coluna 10
	
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			r[i][j] = m[i][j];
	
	for(int i=0;i<10;i++){
		r[i][3] = m[i][9];
		r[i][9] = m[i][3];
	}
	
	cout<<"2."<<endl;
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
			cout<<r[i][j]<<" ";
		cout<<endl;
	}
	
	//diag principal com diagonal secundaria
	
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			r[i][j] = m[i][j];
	
	
	int l=0,c=9;
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++){
			if(i==j){
				r[i][j] = m[l][c];
				r[l++][c--] = m[i][j];
			}
		}
		
	cout<<"3."<<endl;
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
			cout<<r[i][j]<<" ";
		cout<<endl;
	}
	
	//linha 5 com coluna 10
	
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			r[i][j] = m[i][j];		
	
	for(int i=0;i<10;i++){
		r[4][i] = m[i][9];
		r[i][9] = m[i][4];
	}
	
	cout<<"4."<<endl;
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
			cout<<r[i][j]<<" ";
		cout<<endl;
	}
	
	return 0;
}
