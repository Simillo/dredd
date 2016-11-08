#include <iostream>
#define f for(int i=0;i<7;i++)

using namespace std;

int main(){

	int n2 = 0, n3 = 0, n23 = 0;
	int v[7];
	
	f
		cin>>v[i];
	
	f{
		if(v[i]%2==0){
			cout<<v[i]<<" ";
			n2++;
		}
	}
	
	if(!n2)
		cout<<0;
	cout<<endl;
	
	f{
		if(v[i]%3==0){
			cout<<v[i]<<" ";
			n3++;
		}
	}
	if(!n3)
		cout<<0;
	cout<<endl;
	
	f{
		if(v[i]%3==0&&v[i]%2==0){
			cout<<v[i]<<" ";
			n23++;
		}
	}
	
	if(!n23)
		cout<<0;
		
	cout<<endl;
	
	return 0;
}
