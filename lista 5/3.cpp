#include <iostream>

using namespace std;

int main(){

	int m[3][4], qntp = 0, qnti = 0;
	float s = 0;
	
	for(int i = 0;i<3;i++){
		for(int j = 0;j<4;j++){
			cin>>m[i][j];
		}
	}
	for(int i = 0;i<3;i++){
		for(int j = 0;j<4;j++){
			int q = m[i][j];
			if(q%2==0)
				qntp++;
			else
				qnti++;
			s+=q;
		}
	}
	
	cout<<qntp<<endl<<qnti<<endl<<s/12.0<<endl;
	
	return 0;
}
