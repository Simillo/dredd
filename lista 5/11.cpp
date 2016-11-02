#include <iostream>
using namespace std;

int main()
{
    int m[10][10];
    
    for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			cin>>m[i][j];
	
	int maior = m[0][0],linha = 0,coluna = 0,menor = m[0][0];
	
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			if(m[i][j]>maior){
				maior=m[i][j];
				linha = i;
			}
			
	for(int i= 0;i<10;i++)
		if(m[linha][i]<menor){
			menor = m[linha][i];
			coluna = i;
		}
	cout<<menor<<endl<<linha<<" "<<coluna<<endl;
    return 0;
}