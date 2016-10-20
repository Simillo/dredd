#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int existe(vector<int> v,int n){
	if(find(v.begin(),v.end(),n)!=v.end())
		return 1;
	else
		return 0;
}


int main(){

	int n , qnt = 0, i,num;
	vector<int> v,repetidos;
	
	cin>>n;

	for(i=0;i<n;i++){
		cin>>num;
		v.push_back(num);
	}
	
	for(i=0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(i==j||existe(repetidos,v[i]))
				continue;
			else{
				if(v[i]==v[j]){
					repetidos.push_back(v[i]);
					qnt++;
				}
			}
		}
	}
	
	
	if(qnt!=0){
		cout<<qnt<<endl;
		
		cout<<repetidos[qnt-1]<<" ";
		
		for(i = 0;i<qnt-1;i++)
			cout<<repetidos[i]<<" ";
	}
	return 0;
}
