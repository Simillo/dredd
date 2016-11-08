#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159265358
using namespace std;

int main(){
	int n;
	
	double a,ang=0,s,c;
	
	cin>>a>>n;
	for(int i = 0;i<n;i++){
		s=sin(ang)*a;
		c=cos(ang)*a;
		cout<<fixed;
		cout<<setprecision(2)<<c<<' '<<s<<endl;
		ang = ang+(((360/n)*PI)/180);
	}
	return 0;
}
