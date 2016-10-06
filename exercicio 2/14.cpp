#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159

int main(){
	
	char sc,gr;
	
	float n;
	cin>>sc>>gr>>n;
	
	if(sc=='s')
		if(gr=='g')
			cout<<sin(n*PI/180)<<endl;
		else
			cout<<sin(n)<<endl;	
	else
		if(gr=='g')
			if(n==90||n==-90)
				cout<<0<<endl;
			else
				cout<<cos(n*PI/180)<<endl;
				
		else
			cout<<cos(n)<<endl;
	
	return 0;
}
