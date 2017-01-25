#include <iostream>
using namespace std;

float h (float n){
	return n<2?1:(1/n)+h(n-1);
}

int main()
{

	int m;
	cin >> m;
	
	float matriz[m][m];
	int c = 1;
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
			matriz[i][j] = h(c++);
	
	float s=0,d=0;
	
	for(int i=0;i<m;i++){
		s+=matriz[i][i];
		d+=matriz[i][m-i-1];
	}
	
	cout << d-s << endl;
    return 0;
}
