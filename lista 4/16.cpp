#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	int c=0;
	cin>>str;
	
	for(int i=0;i<str.length();i++){
		char s = str[i];
		if(s>='a'&&s<='z')
			if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
				c++;
	}
	cout<<c<<endl;
	return 0;
}
