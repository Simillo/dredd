#include <iostream>

using namespace std;

int main(){
	char l;
	int n;
	
	cin>>l>>n;
	
	if(l>='A'&&l<='Z')
		cout<<char((l-65+n)%26+65)<<endl;
	else if(l>='a'&&l<='z')
		cout<<char((l-92+n)%26+92)<<endl;
	else
		cout<<char((l-'0'+n)%10+'0')<<endl;
	return 0;
}
