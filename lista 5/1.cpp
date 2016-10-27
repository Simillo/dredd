#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int v[n];
	
	for(int i= 0 ;i<n;i++)
		cin>>v[i];
	
	int meio = n/2, ini = 0, fim = n,b;
	
	cin>>b;
	
	while(v[meio]!=b&&ini<=fim){
        if (b > v[meio])
            fim = meio-1;
        else
        	ini = meio+1;
		meio = (ini + fim)/2;
	}
	if(ini>fim)
		cout<<-1<<endl;
	else
		cout<<meio<<endl;
	return 0;
}

