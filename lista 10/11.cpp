#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ifstream entrada("dados.txt");
    int qnt;
    entrada >> qnt;

    int c=0;
    string nomes[qnt], tipo[qnt];
    int dist[qnt];

    while(entrada >> nomes[c] >> tipo[c] >> dist[c]) c++;

    string busca;
    cin >> busca;
    int numero;
    cin >> numero;

    for(int i=0;i<qnt;i++)
        for(int j=i+1;j<qnt;j++)
            if(dist[i] > dist[j]){
                int d = dist[i];
                dist[i] = dist[j];
                dist[j] = d;

                string n = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = n;

                string t = tipo[i];
                tipo[i] = tipo[j];
                tipo[j] = t;
            }
    ofstream saida("pokemon.txt");
    c=0;
    for(int i=0;i<qnt;i++){
        if(c<numero && tipo[i] == busca){
            saida << nomes[i] << endl;
            c++;
        }
    }
    saida.close();
    entrada.close();
    return 0;
}