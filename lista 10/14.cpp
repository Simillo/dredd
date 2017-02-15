#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int v[n];
	for(int i=0;i<n;i++)
		cin >> v[i];
	int q;
	cin >> q;

	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(v[i] > v[j]){
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}	
	for(int i=0;i<q;i++)
		cout << v[i] << " ";
	cout << endl;	
	return 0;
}
