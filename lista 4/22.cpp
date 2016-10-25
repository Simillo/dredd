#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> v1,v2;
	
	int n1,n2,i,j,tmp;
	
	cin>>n1>>n2;
	
	for(i=0;i<n1;i++){
		cin>>tmp;
		v1.push_back(tmp);
	}
	
	for(i=0;i<n2;i++){
		cin>>tmp;
		v2.push_back(tmp);
	}
	
	int h = 0, fi = -1,fj = -1;
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(v1[i]==v2[j]&&((v1[i+1]==v1[i]+1&&v2[j+1]==v2[j]+1)||(v1[i-1]==v1[i]-1&&v2[j-1]==v2[j]-1))){
				if(fi!=-1&&fj!=-1&&fi+1!=i&&fj+1!=j)
					cout<<endl;
				cout<<v1[i]<<" ";
				h = 1;
				fi = i;
				fj = j;
			}
		}
	}
	
	if(!h)
		cout<<"ERRO"<<endl;
	
	return 0;
}
