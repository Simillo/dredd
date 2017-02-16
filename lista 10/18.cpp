#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
typedef struct {
    int Nota;
    int Qnt;
    int Vezes;
    string Nome;
} Musicas;

vector<Musicas> ordByNota(vector<Musicas> v){
    int s = v.size();
    for(int i=0;i<s-2;i++){
        int m = i;
        for(int j=i+1;j<s-1;j++)
            if(v[m].Nota < v[j].Nota)
                m = j;
        if(m!=i){
            int nota    = v[i].Nota;
            int qnt     = v[i].Qnt;
            int vezes   = v[i].Vezes;
            string nome = v[i].Nome;

            v[i].Nota   = v[m].Nota; 
            v[i].Qnt    = v[m].Qnt;
            v[i].Vezes  = v[m].Vezes;
            v[i].Nome   = v[m].Nome;

            v[m].Nota   = nota;
            v[m].Qnt    = qnt;
            v[m].Vezes  = vezes;
            v[m].Nome   = nome;
        }
    }
    return v;
}
vector<Musicas> ordByQnt(vector<Musicas> v){
    int s = v.size();
    for(int i=0;i<s-2;i++){
        int m = i;
        for(int j=i+1;j<s-1;j++)
            if(v[m].Nota == v[j].Nota && v[m].Qnt < v[j].Qnt)
                m = j;
        if(m!=i){
            int nota    = v[i].Nota;
            int qnt     = v[i].Qnt;
            int vezes   = v[i].Vezes;
            string nome = v[i].Nome;

            v[i].Nota   = v[m].Nota; 
            v[i].Qnt    = v[m].Qnt;
            v[i].Vezes  = v[m].Vezes;
            v[i].Nome   = v[m].Nome;
 
            v[m].Nota   = nota;
            v[m].Qnt    = qnt;
            v[m].Vezes  = vezes;
            v[m].Nome   = nome;
        }
    }
    return v;
}

vector<Musicas> ordByInte(vector<Musicas> v){
    int s = v.size();
    for(int i=0;i<s-2;i++){
        int m = i;
        for(int j=i+1;j<s-1;j++)
            if(v[m].Nota == v[j].Nota && v[m].Qnt == v[j].Qnt && v[m].Vezes < v[j].Vezes)
                m = j;
        if(m!=i){
            int nota    = v[i].Nota;
            int qnt     = v[i].Qnt;
            int vezes   = v[i].Vezes;
            string nome = v[i].Nome;

            v[i].Nota   = v[m].Nota; 
            v[i].Qnt    = v[m].Qnt;
            v[i].Vezes  = v[m].Vezes;
            v[i].Nome   = v[m].Nome;

            v[m].Nota   = nota;
            v[m].Qnt    = qnt;
            v[m].Vezes  = vezes;
            v[m].Nome   = nome;
        }
    }
    return v;
}
int main(){
    vector<Musicas> m;
    m.push_back(Musicas());
    ifstream arq("dados-musicas.txt");
    int c=0;
    while(arq >> m[c].Nota >> m[c].Qnt >> m[c].Vezes){
        getline(arq, m[c].Nome);
        c++;
        m.push_back(Musicas());
    }
    m = ordByInte(ordByQnt(ordByNota(m)));

    ofstream saida("musicas-ordenadas.txt");
    
    for(int i=0;i<c;i++){
        saida << m[i].Nota << " " << m[i].Qnt << " " << m[i].Vezes << " " << m[i].Nome << endl;
    }
    saida.close();
    arq.close();
    

}