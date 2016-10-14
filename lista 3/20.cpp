#include <iostream>
#include <cmath>


using namespace std;

int main(){
	
	double v,aux;
	int d,l;
	
	aux = sqrt(2);
	
	d = 2;
	v = aux;
	cin>>l;
	
	for(int i=0;i<l;i++){
		aux = sqrt(2+aux);
		v *= aux;
		d *= 2;
	}
	cout<<(2.0*d)/v<<endl;
	
	return 0;
}


/*#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,i;
	
	cin>>n;
	
	double pi[n],pi2=1;
	
	pi[0]=0;
	
	for(i=1;i<=n;i++){
		pi2 = pi2 * sqrt(2+pi[i-1]);
		pi[i] = sqrt(2+pi[i-1]);
	}
	
	pi2 = pi2/pow(2,n);
	
	cout<<(2/pi2)<<endl;
	
	return 0;
	
}*/
