#include <iostream>

using namespace std;

int cycle (int n){
	int c=1;
	
	while(n!=1){
		if(n%2)
			n = n * 3+1;
		else
			n /= 2;
		c++;
	}
	
	return c;
}

int main(){
	
	int i,j,m=0,r;
	
	cin>>i>>j;
	
	for(int a = i;a<=j;a++)
		if((r = cycle(a))>m)
			m = r;
	
	cout<<i<<endl<<j<<endl<<m<<endl;
	return 0;
}
