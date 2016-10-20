#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int n1,n2;
	
	cin>>n1>>n2;
	
	vector<float> v1,v2;
	float n;
	
	for(int i=0;i<n1;i++){
		cin>>n;
		v1.push_back(n);
	}
		
	for(int i=0;i<n2;i++){
		cin>>n;
		v2.push_back(n);
	}
	
	int c = 0;
	
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			if(v1[i]==v2[j]){
				cout<<v1[i]<<" ";
				c++;
			}
		}
	}
	if(!c)
		cout<<-1<<endl;
	return 0;
}
