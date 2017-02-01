#include <iostream>
#include <vector>

using namespace std;

void path(vector<vector<char> > m, int l, int c){
	cout << endl << endl;
	for(int i=0;i<10;i++){
		for(int j=0;j<15;j++)
			cout << m[i][j];
		cout << endl;
	}
}



int main()
{
	vector<vector<char> > m;
	for(int i=0;i<10;i++){	
		vector<char> linha;
		for(int j=0;j<15;j++){
			char coluna;
			cin >> coluna;
			linha.push_back(coluna);
		}
		m.push_back(linha);
	}

	path(m,0,0);
	return 0;
}