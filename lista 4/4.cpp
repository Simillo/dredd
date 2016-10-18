#include <iostream>
#include <vector>
#define f for(i=0;i<8;i++)
#define q for(int p=0;p

using namespace std;

int main(){
	
	vector<int> v,v1,v2;
	int n,i;
	
	f{
		cin>>n;
		v.push_back(n);
	}
	
	f{
		if(v[i]>0)
			v1.push_back(v[i]);
		else if(v[i]<0)
			v2.push_back(v[i]);
		
	}
	q<v1.size();p++){
		cout<<v1[p]<<" ";
	}
	cout<<endl;
	
	q<v2.size();p++){
		cout<<v2[p]<<" ";	
	}
	return 0;
}
