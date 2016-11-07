#include <iostream>
using namespace std;

int main()
{
	int tipoI;
	
	float valorI, r1 = 0.005, r2= 0.03, tx=30;
	
	cin>>tipoI>>valorI;
	
	if(tipoI==1)
		cout<<valorI + valorI * r1<<endl;
	else
		cout<<((valorI*r2)+(valorI-tx))<<endl;
    return 0;
}

