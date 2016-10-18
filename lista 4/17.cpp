#include <iostream>

using namespace std;

int main(){
	char c[10];
	
	for(int i=0;i<10;i++)
		cin>>c[i];
		
	for(int i=0;i<10;i++)
		if(c[i]!='a'&&c[i]!='e'&&c[i]!='i'&&c[i]!='o'&&c[i]!='u')
			cout<<c[i];
	return 0;
}

