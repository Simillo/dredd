#include <iostream>
#include <vector>

#define fi for(int i=0;i<10;i++)
#define fj for(int j=0;j<15;j++) 

using namespace std;

void path(vector<vector<char> > m, int l, int c){
	if(m[l][c] == '.'){
		m[l][c] = 'x';
		if(l == 9 && c == 14){
			fi{
				fj
					cout <<m[i][j];
				cout << endl;
			}
		}
		if(m[l][c+1] == '.'){
			if(c<14)
				path(m,l,++c);
		}
		else if(m[l+1][c] == '.'){
			if(l<9)
				path(m,++l,c);
		}
		else
			path(m,0,0);
	}else if(m[l][c] == 'x'){
		if(m[l+1][c] == 'x')
			path(m,++l,--c);
		if(m[l][c+1] == 'x')
			path(m,l,++c);
	}	 
}



int main()
{
    vector<vector<char> > matrix;
    vector<vector<char> > newMatrix;
    
    fi{
        vector<char> linhaAux;
        fj{
            char itemAux;
            cin >> itemAux;
            linhaAux.push_back(itemAux);
        }
        matrix.push_back(linhaAux);
    }
    path(matrix,0,0);

    return 0;
}