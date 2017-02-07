#include <iostream>
#include <vector>

#define fi for(int i=0;i<10;i++)
#define fj for(int j=0;j<15;j++) 

using namespace std;

bool path(char m[][15], int i, int j){
	if(i==9 && j==14){
		m[i][j] = 'x';
		return true;
	}
	if(m[i][j] == '#' || i > 9 || j > 14)
		return false;
	
	m[i][j] = 'x';
	bool aux = path(m,i,j+1);
	if(aux) return true;
	return path(m,i+1,j);
}

int main()
{
    char m[10][15];
    
    fi
        fj
			cin >> m[i][j];
			
	path(m,0,0);
	
    fi{
		fj
			cout << m[i][j];
		cout << endl;
	}

    return 0;
}
