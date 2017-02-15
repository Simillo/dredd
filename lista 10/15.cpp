#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int v[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin >> v[i][j];
	int ord[n*n];
	int c=0;
	for(int i=n-1;i>=0;i--)
		ord[c++] = v[i][0];
	for(int i=1;i<n;i++)
		ord[c++] = v[i][i];
	for(int i=n-2;i>=0;i--)
		ord[c++] = v[i][n-1];
	
	for(int i=0;i<c;i++)
		for(int j=i+1;j<c;j++)
			if(ord[i] > ord[j]){
				int aux = ord[i];
				ord[i] = ord[j];
				ord[j] = aux;
			}
	c=0;
	for(int i=n-1;i>=0;i--)
		v[i][0] = ord[c++];
	for(int i=1;i<n;i++)
		v[i][i] = ord[c++];
	for(int i=n-2;i>=0;i--)
		v[i][n-1] = ord[c++];
		
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout << v[i][j] << " ";
		cout << endl;
	}
	return 0;
}
