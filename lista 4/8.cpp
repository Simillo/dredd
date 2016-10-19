#include <iostream>
#include <vector>
using namespace std;

int indexOf(vector<int>v, int n){
	for(int i=0;i<v.size();i++){
		if(v[i]==n)
			return i;
    }
	
	return -1;
}


int main(){
	vector<int> v;
	int n, del,ele;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ele;
		v.push_back(ele);
	}
	
	cin>>del;
	
	int ind = indexOf(v,del);
	
	if(ind == -1)
		cout<<"ELEMENTO NAO ENCOTRADO"<<endl;
	else{
		for(int i = ind;i<n;i++)
		
			v[i] = v[i+1];
		for(int i=0;i<n-1;i++)
			cout<<v[i]<<" ";
	}
	
	return 0;
}
