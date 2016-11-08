#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> int_to_vec(int n){
	vector<int> v,vs;
	while(n!=0){
		v.push_back(n%10);
		n/=10;
	}
	for(int i = ((int)v.size())-1;i>=0;i--){
		int p = v[i];
		vs.push_back(p);
	}
	return vs;
}

int main(){
	int n;
	
	vector<int> numeros;
	cin>>n;
	
	int r,h = n;
		
	while(n!=1){
		vector<int> e;
		e = int_to_vec(n);
		n = 0;
	
		for(int i=0;i<(int)e.size();i++) n+=pow(e[i],2);
		
		if(n==1){
			numeros.push_back(n);
			r = 1;
			break;
		}
		if(find(numeros.begin(),numeros.end(),n)!=numeros.end()||n==h){
			numeros.push_back(n);
			r = 0;
			break;
		}else
			numeros.push_back(n);
	}
	
	for(int i=0;i<(int)numeros.size();i++)
		cout<<numeros[i]<<" ";
	
	cout<<endl;
	
	if(r)
		cout<<"sim";
	else
		cout<<"nao";
		
	cout<<endl;
	
	return 0;
}
