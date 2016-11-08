#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int l,c;
	
	cin>>l>>c;
	
	float m[l][c],o[l][c];
	
	for(int i=0;i<l;i++)
		for(int j=0;j<c;j++){
			cin>>m[i][j];
			o[i][j] = m[i][j];
		}
		
	float maior[l];
	
	for (int i=0;i<l;i++)
		maior[i] = abs(m[i][0]);
	
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			if(abs(m[i][j])>maior[i])
				maior[i] = abs(m[i][j]);
		}
	}
	int h = 1;
	for(int i=0;i<l;i++)
		for(int j=0;j<c;j++){
			if(maior[i]==0)
				h = 0;
			else
				m[i][j] = m[i][j]/maior[i];
		}
	
	if(h){
		for(int i=0;i<l;i++){
			for(int j=0;j<c;j++)
				cout<<o[i][j]<<" ";
			cout<<endl;
		}

		cout<<endl;
		
		for(int i=0;i<l;i++){
			for(int j=0;j<c;j++)
				cout<<m[i][j]<<" ";
			cout<<endl;
		}

	}else
		cout<<-1<<endl;
	
	return 0;
}
