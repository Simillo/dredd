#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int n,u;
	cin>>n;
	
	vector<int> vetor;
	
	for(int i=0;i<n;i++){
		cin >> u;
		vetor.push_back(u);
	}
	
	int moda = 0,qntrep = 0,tamanho = vetor.size();
	for(int i=0;i<tamanho;i++){
		for(int j=0;j<tamanho;j++){
			if(vetor[i]==vetor[j] && i!=j){
				qntrep++;
			}
		}
		if(qntrep>moda)
			moda = qntrep;
		qntrep = 0;
	}
	
	vector<int> numeros;
	
	for(int i=0;i<tamanho;i++){
		qntrep = 0;
		for(int j=0;j<tamanho;j++){
			if(vetor[i]==vetor[j] && i!=j){
				qntrep++;
			}
		}
		if(qntrep == moda){
			bool existe = false;
			for(int x = 0; x<(int)numeros.size();x++){
				if(vetor[i] == numeros[x])
					existe = true;
			}
			if(!existe)
				numeros.push_back(vetor[i]);
		}
	}
	
	int t = numeros.size();
	cout<<(int)numeros.size()<<endl;
	
	for(int i=0;i<t;i++)
		cout<<numeros[i]<<" ";
	cout<<endl;
	return 0;
}
