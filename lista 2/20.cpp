#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float x1,y1,x2,y2,x3,y3,cop,cad,hip,hipp;
	
	char v;
	
	cin>>x1>>y1>>x2>>y2>>v;
	
	cop = y2-y1;
	
	cad = x2-x1;
	
	hip = sqrt((cop*cop)+(cad*cad));
	if(v=='x'){
		cin>>x3;
		if((x3>=x1&&x3<=x2)||(x3<=x1&&x3>=x2)){
			hipp = ((x3-x1)*hip)/(x2-x1);
			cop = sqrt((hipp*hipp)-((x3-x1)*(x3-x1)))+y1;
			cout<<cop<<endl;
		}else
			cout<<"nenhuma"<<endl;
	}else{
		cin>>y3;
		if((y3<=y1&&y3>=y2)||(y3>=y1&&y3<=y2)){
			hipp = ((y3-y1)*hip)/(y2-y1);
			cad = sqrt((hipp*hipp)-((y3-y1)*(y3-y1)))+x1;
			cout<<cad<<endl;
		}else{
			cout<<"nenhuma"<<endl;
		}
	}
	
	return 0;
}
