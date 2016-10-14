#include <iostream>

using namespace std;

int main(){
	
	int x,y,z;
	
	cin>>x>>y>>z;
	
	if(z+y<z||z+x<y||y+x<z)
		cout<<-1<<endl;
	else{
		if(z==y&&z==x)
			cout<<"equilatero"<<endl;
		else if((z==y&&z!=x)||(y==x&&y!=z)||(x==z&&x!=y))
			cout<<"isosceles"<<endl;
		else
			cout<<"escaleno"<<endl;
	}
	
	return 0;
}
