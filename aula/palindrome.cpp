#include <iostream>

using namespace std;

int main(){
	
	char a,b,c,d,e,f,g;
	
	int q = 0;
	
	cin>>a>>b>>c>>d>>e>>f>>g;
	
	bool ok;
	
	ok = a==g&&b==f&&c==e?1:0;
	
	if(!ok){
		q+=a!=g?1:0;
		q+=b!=f?1:0;
		q+=c!=e?1:0;
		cout<<q<<" Letras necessarias pra se tornar palindromo."<<endl;
	}else
		cout<<"Palindromo sem alteracoes."<<endl;
	
	
	return 0;
}
