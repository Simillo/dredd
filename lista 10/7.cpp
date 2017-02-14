#include <iostream>
#define fi for(int i=0;i<n;i++)
#define fj for(int j=0;j<n;j++)
#define fx for(int x=j+1;x<n;x++)
#define op  int aux = m[i][j];\
            m[i][j] = m[i][x];\
            m[i][x] = aux;
using namespace std;

int main(){
    int n;

    cin >> n;

    int m[n][n];
    fi
        fj
            cin >> m[i][j];
    
    fi
        fj
            if(i%2==0)
                fx{
                    if(m[i][j] > m[i][x]){
                       op;
                    }
                }
            else
                fx{
                    if(m[i][j] < m[i][x]){
                        op;
                    }
                    
                }
    fi{
        fj
            cout << m[i][j] << " ";
        cout << endl;
    }
    return 0;
}