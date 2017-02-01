#include <iostream>
#include <vector>

using namespace std;

int around(vector<vector<char> > m, int l, int c){
	if(l>0 && c > 0)
		if(m[l-1][c-1] == '#')
			return 0;
	else if(l<10 && c<15)
		if(m[l+1][c+1] == '#')
			return 0;
	else if(l>0 && c == 0)
		if(m[l-1][c] == '#')
			return 0;
	else if(l==0 && c>0)
		if(m[l][c-1] == '#')
			return 0;
	else if(l < 10 && c==15)
		if(m[l+1][c] == '#')
			return 0;
	else if(l == 10 && c<15)
		if(m[l][c+1] == '#')
			return 0;
	return 1;
}
vector<vector<char> > path(vector<vector<char> > m, int l, int c){
	if(l<10&&c<15){
		if(m[l][c] == '.'){
			if(around(m,l,c))
				m[l][c] = 'x';
			else if(l<10&&c==15)
				path(m,++l,0);
			else if(l==10&&c<15)
				path(m,l,++c);
		}
	}
	return m;

}



int main()
{
	vector<vector<char> > m;
	vector<vector<char> > newm;
	for(int i=0;i<10;i++){	
		vector<char> linha;
		for(int j=0;j<15;j++){
			char coluna;
			cin >> coluna;
			linha.push_back(coluna);
		}
		m.push_back(linha);
	}

	newm = path(m,0,0);
	cout << endl << endl << endl;
	for(int i=0;i<10;i++){	
		for(int j=0;j<15;j++){
			cout << newm[i][j];
		}
		cout << endl;
	}
	
	return 0;
}