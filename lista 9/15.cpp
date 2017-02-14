 #include <iostream>
#include <vector>

#define fi for(int i=0;i<18;i++)
#define fj for(int j=0;j<30;j++) 

using namespace std;

bool path(char m[][30], int i, int j){
	if(i==17 && j==29){
		m[i][j] = 'x';
		return true;
	}
	if(m[i][j] == '#' || i > 17 || j > 29)
		return false;
	
	m[i][j] = 'x';
	if(path(m,i,j+1)) return true;
	return path(m,i+1,j);
}

int main()
{
    char m[18][30];
    fi
        fj
			cin >> m[i][j];
	path(m,0,0);
    fi{
		fj
			cout << m[i][j];
		cout << endl;
	}
    // return 0;
}
