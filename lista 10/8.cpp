#include <iostream>
#include <vector>

using namespace std;

typedef struct{
    int idade, quantidade;
} Amigos;
vector<Amigos> ord(vector<Amigos> am){
    for(int i=0;i<5;i++){
        for(int j = i+1;j<5;j++){
            if(am[i].idade < am[j].idade){
                int aux = am[i].idade;
                am[i].idade = am[j].idade;
                am[j].idade = aux;
                
                aux = am[i].quantidade;
                am[i].quantidade = am[j].quantidade;
                am[j].quantidade = aux;
            }
        }
    }
    return am;
}
int main(){

    vector<Amigos> am;
    am.push_back(Amigos());
    for(int i=0;i<5;i++){
        int aux;
        cin >> aux;
        am[i].idade = aux;

        cin >> aux;
        am[i].quantidade = aux;

        am.push_back(Amigos());
    }
    am = ord(am);
    int busca;
    cin >> busca;
    int ok = 0,soma = 0;
    float mediaIdades = 0;
    for(int i=0;i<5;i++){
        if(am[i].quantidade == busca){
            cout << am[i].idade << endl;
            ok = 1;
        }
        mediaIdades+=am[i].idade;
        soma += am[i].quantidade;
    }
    if(!ok)
        cout << -1 << endl;
    cout << mediaIdades/5.0 << endl << soma << endl;

    return 0;
}