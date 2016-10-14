#include <iostream>


using namespace std;

int main(){
	
	int n,s=0;
	
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<i;
			if(i!=n)
				cout<<"+";
			s+=i;
		}
	}
	cout<<"="<<s<<endl;
	
	return 0;
}
