#include <iostream>

using namespace std;

int main(){
	
	int n,l,c,vl[8],vc[8];
	
	cin>>n;
	
	int ta[n][n];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			cin>>ta[i][j];
			if(ta[i][j]==1){
				l = i;
				c = j;
			}
		}
		
	vl[0] = -1;
	vc[0] = 2;
	
	vl[1] = -2;
	vc[1] = 1;
	
	vl[2] = -2;
	vc[2] = -1;
	
	vl[3] = -1;
	vc[3] = -2;
	
	vl[4] = 1;
	vc[4] = -2;
	
	vl[5] = 2;
	vc[5] = -1;
	
	vl[6] = 2;
	vc[6] = 1;
	
	vl[7] = 1;
	vc[7] = 2;
	 
	int co = 0;	
	
	for(int i=0;i<8;i++){
		int x = l+vl[i], y = c+vc[i];
		if(x>=0&&x<n&&y>=0&&y<n)
			if(ta[x][y] == 2)
				co++;
	}
	cout<<co<<endl;
	return 0;
}
