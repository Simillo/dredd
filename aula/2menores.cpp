#include <iostream>

using namespace std;

int main(){
	int a,b,c,d,e,r1,r2;
	
	cin>>a>>b>>c>>d>>e;
	
	r1 = a;
	if(r1>b)
		r1=b;
	else
		r2=b;
	if(r1>c)
		r1=c;
	else
		r2=c;
	if(r1>d)
		r1=d;
	else
		r2=d;
	if(r1>e)
		r1=e;
	else
		r2=e;
	
	if(r2>b && b>r1)
		r2=b;
	cout<<r1<<' '<<r2<<endl;
	if(r2>c && c>r1)
		r2=c;
	cout<<r1<<' '<<r2<<endl;
	if(r2>d && d>r1)
		r2=d;
	cout<<r1<<' '<<r2<<endl;
	if(r2>e && e>r1)
		r2=e;
		
	cout<<r1<<' '<<r2<<endl;

	return 0;
}
