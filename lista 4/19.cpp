#include <iostream>
#include <string>
#include <vector>

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

string toString(int n){
	vector v = int_to_vec(n);
	string s= "";
	for(int i=0;i<(int)v.size();i++){
		s+=char(v[i]+48);
	}
	
	return s;
}

int main(){
	int n = 12557;
	
	vector<int> v,vs;
	
	vs = int_to_vec(n);
	
	string s = vec_to_string(vs);
	
	
	for(int i=0;i<(int)vs.size();i++)
		cout<<vs[i]<<endl;

	return 0;
}
