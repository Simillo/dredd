#include <iostream>
#include <cmath>

/*							BUGADO				*/
using namespace std;
int main(){
	double res = 2.0;
	double fact = 1;
	int n;
	
	cin>>n;

	for (int i=2; i<=n; i++){
    	fact *= i;
    	res += 1/fact;
	}
	if(n==1)
		cout<<1<<endl;
	else if(n==2)
		cout<<2<<endl;
	else
		cout<<res<<endl;
}	
