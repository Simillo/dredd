#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	float v[n];
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(v[i] > v[j]){
				float aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}	
	}
	for(int i=0;i<n;i++)
		cout << v[i] << " ";
	cout << endl;
	return 0;
}

