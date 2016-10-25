#include <iostream>
#include <vector>

using namespace std;

int main(){
	int t1,tmp;
	
	cin>>t1;

	vector<int> v1,v2; 
	
	for(int i = 0; i < t1; i++){
		cin>>tmp;
		v1.push_back(tmp);
	}
	for(int i = 0 ; i < t1; i++){
		cin>>tmp;
		v2.push_back(tmp);
	}

	int p,c=0,tamanho = v1.size();

	cin>>p;
	
	while(c<tamanho){
		v2.insert(v2.begin()+p,v1[c++]);
		for(int i = 0; i < (int)v2.size();i++)
			cout<<v2[i]<<" ";
		cout<<endl;
	}

	return 0;
}
