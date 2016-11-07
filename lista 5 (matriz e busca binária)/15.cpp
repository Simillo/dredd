#include <iostream>

using namespace std;

int main(){
	int nrep[10],linha,coluna;
	
	cin >> linha >> coluna;
	
	int m[linha][coluna];
	
	for(int i=0;i<linha;i++)
		for(int j=0;j<coluna;j++)
			cin>>m[i][j];
	
	for(int i=0;i<10;i++)
		nrep[i] = 0;
		
	for(int i=0;i<linha;i++)
		for(int j=0;j<coluna;j++)
			nrep[m[i][j]]++;
	
	int r = 0;
	
	for(int i=0;i<10;i++)
		if(nrep[i]>1){
			cout<<i<<" "<<nrep[i]<<endl;
			r = 1;
		}
	
	if(!r)
		cout<<-1<<endl;	
	
	return 0;
}
