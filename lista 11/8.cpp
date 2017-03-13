#include <iostream>

using namespace std;

typedef struct {
    int mat;
    float notas[2];
} Alunos;

int main(){
    int n;
    cin >> n;

    Alunos* a = new Alunos [n];

    Alunos** m = new Alunos *[n];

    for(int i=0;i<n;i++)
        m[i] = new Alunos [n];

    int aux = 0;
    for(int j=0;j<n;j++){
        for(int x=0;x<n;x++){
            cin >> a[aux].mat >> a[aux].notas[0] >> a[aux].notas[1];
            m[j][x] = a[aux];
            aux++;
            //  cout << "-----------" << endl  << "-> "<< aux << endl << "------------" << endl; 
        }
    }  
    
    for(int j=0;j<n;j++){
        for(int x=0;x<n;x++){
            Alunos aluno = m[j][x];
            int maux = aluno.mat;
            float n1 = aluno.notas[0];
            float n2 = aluno.notas[1];
            cout << maux << " " << n1 << " " << n2;
        }
        cout << endl;
    }

    return 0;
}
