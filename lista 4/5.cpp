#include <iostream>
#include <vector>

using namespace std;

int existe(vector<int> v,int n){
	for(int i=0;i<v.size();i++){
		if(v[i]==n)
			return 1;
	}
	return 0;
}

int indexOf(vector<int> v,int n){
	for(int i=0;i<v.size();i++){
		if(v[i]==n)
			return i;
	}
	return -1;
}

int main(){

	vector<int> codigo,quantidade;
	int i,n,cod_produto,quantidade_produto,inexistente = 0,natendido=0;

	for(i=0;i<10;i++){
		cin>>n;
		codigo.push_back(n);
	}

	for(i=0;i<10;i++){
		cin>>n;
		quantidade.push_back(n);
	}

	for(;;){
		cin>>n;
		if(n==0)
			break;
		cin>>cod_produto>>quantidade_produto;
		if(!existe(codigo,cod_produto))
			inexistente++;
		else{
			int index = indexOf(codigo,cod_produto);
			int atendido = quantidade[index] - quantidade_produto;
			if(atendido>=0)
				quantidade[index]-=quantidade_produto;
			else
				natendido++;
		}
	}

	for(i=0;i<10;i++){
		cout<<codigo[i]<<" "<<quantidade[i]<<endl;
	}
	cout<<inexistente<<endl<<natendido<<endl;


	return 0;
}
