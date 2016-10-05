#include <iostream>

using namespace std;

int main(){
	
	int d1,d2,m1,m2,a1,a2,r;
	
	cin>>d1>>m1>>a1;
	cin>>d2>>m2>>a2;
	
	if(a1>a2)
		r=1;
	else if(a1<a2)
		r=2;
	else if(a1==a1){
		if(m1>m2)
			r=1;
		else if(m1<m2)
			r=2;
		else if(m1==m2){
			if(d1>d2)
				r=1;
			else if(d1<d2)
				r=2;
			else if(d1==d2){
				r=0;
			}	
		}
	}
	
	if(r==1)
		cout<<d1<<" "<<m1<<" "<<a1<<endl;
	else if(r==2)
		cout<<d2<<" "<<m2<<" "<<a2<<endl;
		
	return 0;
}
