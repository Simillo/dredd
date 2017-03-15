#include <iostream>

using namespace std;

typedef struct {
    int mat;
    float notas[2];
    float media;
} Alunos;

int main(){
    int n;
    cin >> n;

    Alunos** m = new Alunos *[n];

    for(int i=0;i<n;i++)
        m[i] = new Alunos [n];

    for(int j=0;j<n;j++){
        for(int x=0;x<n;x++){
            Alunos* al = new Alunos();
            cin >> al->mat >> al->notas[0] >> al->notas[1];
            al->media = (al->notas[0]+al->notas[1])/2;
            m[j][x] = *al;
        }
    }

for(int col = 0; col < n; col++)
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(m[i][col].media < m[j][col].media){
                int auxT = m[i][col].mat;
                m[i][col].mat = m[j][col].mat;
                m[j][col].mat = auxT;
                float mediaT = m[i][col].media;
                m[i][col].media = m[j][col].media;
                m[j][col].media = mediaT; 
            }
    
    for(int j=0;j<n;j++){
        for(int x=0;x<n;x++){
            Alunos aluno = m[j][x];
            int mat = aluno.mat;
            // float me = aluno.media;
            
            cout << mat <<  " " ;
        }
        cout << endl;
    }

    return 0;
}
