#include <iostream>

using namespace std;

int main(){
	
	float n,soma=0;
	
	int qnt=0;
	
	for(int i=0;i<10;i++){
		cin>>n;
		if(n>0)
			soma+=n;
		else if(n<0)
			qnt++;
	}
	
	cout<<qnt<<endl<<soma<<endl;
	
	return 0;
}
