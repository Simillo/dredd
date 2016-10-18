#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> v1,v2;
	int n,produto=1;
	
	for(int i=0;i<7;i++){
		cin>>n;
		v1.push_back(n);
	}
	for(;;){
		cin>>n;
		if(n<0)
			break;
		else
			v2.push_back(n);
	}
	for(int i=0;i<v2.size();i++){
		produto*=v1[v2[i]];
	}
	cout<<produto<<endl;
	
	return 0;
}
