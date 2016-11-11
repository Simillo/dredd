#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

typedef struct{
    int cod;
    char nome[100];
} Cliente;

typedef struct{
    int cod;
    int conta;
    int valor;
} Compra;


int main()
{
    int tipo = -1, n = 0, cod, conta, valor;
    
    int c1=0, c2=0;
    
    char nome[100];
    
    Cliente cliente[100];
    
    Compra compra[100];
    
    vector<string> resultado;
    
    while(tipo!=0 && n<100){
        cin >> tipo;
        if(tipo!=0){
            if(tipo == 1){
                cin >> cod;
                int v = 1;
                for(int i=0;i<c1;i++){
                    if(cliente[i].cod == cod){
                        v=0;
                    }
                }
                if(v){
                    cin >> nome;
                    cliente[c1].cod = cod;
                    strcpy(cliente[c1].nome,nome);
                    c1++;
                    resultado.push_back("OK");
                }else
                    resultado.push_back("ERRO");
            }else if(tipo == 2){
                cin >> cod;
                int v = 1;
                for(int i=0;i<c1;i++){
                    if(cliente[i].cod == cod){
                        v=0;
                    }
                }
                if(v){
                    resultado.push_back("ERRO");
                }else{
                    cin >> conta >> valor;
                    compra[c2].cod = cod;
                    compra[c2].conta = conta;
                    compra[c2].valor = valor;
                    c2++;
                    resultado.push_back("OK");
                }
            }else{
                cin >> cod;
                int v = 1;
                for(int i=0;i<c2;i++){
                    if(compra[i].cod == cod){
                        if(compra[i].valor > 0){
                            v=0;
                        }
                    }
                }
                if(v){
                    int v = 1;
                    int index;
                    for(int i=0;i<c1;i++){
                        if(cliente[i].cod == cod){
                            v=0;
                            index = i;
                        }
                    }
                    if(v){
                        resultado.push_back("ERRO");
                    }else{
                        cliente[index].cod = -1;
                        resultado.push_back("OK");
                    }
                }else{
                    resultado.push_back("ERRO");
                }
            }
        }
        n++;
    }
    for(int i=0;i<(int)resultado.size();i++)
        cout<<resultado[i]<<endl;
    
    return 0;
}
