#include <iostream>

using namespace std;

int main(){
	
	float e,f,h;
	
	cin>>e>>f;
	
	h = (e-(2.0/3.0*f));
	
	h*=60;
	
	if(h>2400)
		cout<<500<<endl;
	else if(h>1800&&h<=2400)
		cout<<400<<endl;
	else if(h>1200&&h<=1800)
		cout<<300<<endl;
	else if(h>600&&h<=1200)
		cout<<200<<endl;
	else
		cout<<100<<endl;
	
	return 0;
}
