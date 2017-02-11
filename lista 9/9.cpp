#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    char m[10][10];

    fstream entrada("tropas.txt");
    
    char wes,ini;
    entrada >> wes >> ini;
    
    int qntWes;
    entrada >> qntWes;
    
    for(int i=0;i<qntWes;i++){
        int x,y;
        entrada >> x >> y;
        m[x][y] = wes;
    }

    int qntIni;
    entrada >> qntIni;

    for(int i=0;i<qntIni;i++){
        int x,y;
        entrada >> x >> y;
        m[x][y] = ini;
    }
    
    char nulo;
    entrada >> nulo;
    
    int c=0, v[10];
    for(int i=0;i<10;i++){
        int sW = 0, sI = 0;
        for(int j=0;j<10;j++){
            if(m[i][j] == wes)
                sW++;
            else if(m[i][j] == ini)
                sI++;
            else
                m[i][j] = nulo;
        }
        if(sW>sI)
            v[c++] = i;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    cout << wes << ": ";
    for(int i=0;i<c;i++)
        cout << v[i] << " ";

    entrada.close();

    return 0;
}