#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	int busca;
	cin >> busca;
	
	for(int i=n-1;i>0;i--){
		int m = i;
		for(int j=i-1;j>=0;j--)
			if(v[m] > v[j])
				m = j;
		if(i!=m){
			int aux = v[i];
			v[i] = v[m];
			v[m] = aux;
			for(int j=0;j<n;j++)
				cout << v[j] << " " ;
			cout << endl;
		}
	}
	int inicio = 0, fim = n-1,meio,ok=0,c=0;
	while(inicio<=fim && !ok){
		meio = (fim+inicio)/2;
		c++;
		if(v[meio] < busca)
			fim = meio-1;
		else if(v[meio] > busca)
			inicio = meio+1;
		else
			ok = 1;
	}
	if(!ok)
		cout << -1 << endl;
	else
		cout << meio << endl << c << endl;
    return 0;
}
