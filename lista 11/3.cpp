#include <iostream>
using namespace std;


int busca(int** m, int b,int l, int c){
	int ok = 0;
	for(int i = 0;i<l;i++)
		for(int j=0;j<c;j++)
			if(m[i][j] == b)
				ok = 1;
	return ok;
}

int main()
{
    int l,c;
    cin >> l >> c;
    
    int** m = new int *[l];
	for (int i=0; i < l; i++)
		m[i] = new int [c];
	for(int i=0;i<l;i++)
		for(int j=0;j<c;j++)
			cin >> m[i][j];
	int b;
	
	cin >> b;
	
	cout << busca(m,b,l,c) << endl;
	
    return 0;
}
