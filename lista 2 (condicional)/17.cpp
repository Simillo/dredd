#include <iostream>
using namespace std;

int main()
{
    float a,b;
    
    char o;
    
    cin>>a>>o>>b;
    
    if(o=='+')
		cout<<a+b<<endl;
	else if(o=='-')
		cout<<a-b<<endl;
	else if(o=='*')
		cout<<a*b<<endl;
	else if(o=='/'){
		if(b==0)
			cout<<"erro"<<endl;
		else
			cout<<a/b<<endl;
	}
	
	return 0;
}

