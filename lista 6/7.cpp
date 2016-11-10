#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

typedef struct{
    int cod_cliente;
    char nome_cliente[100];
} Cliente;

typedef struct{
    int cod_cliente;
    int conta;
    int valor;
} Compra;


int main()
{
    int cc = 0,com = 0, n=0,tipo = 1,cod,valor,conta;
    char nome[100];
    Cliente vetor_cliente[100];
    Compra vetor_compra[100];
    
    vector<string> resultado;
    
    while(tipo>=1 && n<100){
        cin >> tipo;
        if(tipo != 0){
            if(tipo == 1){
                cin >> cod >> nome;
                
                int h = 1;
                for(int i = 0;i<cc;i++){
                    if(cod == vetor_cliente[i].cod_cliente)
                        h=0;
                }
                if(h==1){
                    vetor_cliente[cc].cod_cliente = cod;
                    strcpy(vetor_cliente[cc].nome_cliente,nome);
                    cc++;
                    resultado.push_back("OK");
                }
                else
                    resultado.push_back("ERRO");
            }else if(tipo == 2){
                cin >> cod;
                
                int h = 0;
                
                for(int i = 0;i<cc;i++){
                    if(cod == vetor_cliente[i].cod_cliente){
                        h=1;
                        break;
                    }
                }
                if(!h){
                	cin >> conta >> valor;
                    vetor_compra[com].cod_cliente = cod;
                    vetor_compra[com].conta = conta;
                    vetor_compra[com].valor = valor;
                    com++;
                    resultado.push_back("OK");
                }else{
                    resultado.push_back("ERRO");
                }
            }else{
                cin >> cod;
                int h=1;
                
                for(int i=0;i<cc;i++){
                    if(cod == vetor_cliente[i].cod_cliente){
                        vetor_cliente[i].cod_cliente = -1;
                        char nu[100];
                        nu[0] = '-';
                        nu[1] = '1';
                        strcpy(nu,vetor_cliente[i].nome_cliente);
                        h=0;
                        resultado.push_back("OK");
                    }
                }
                if(h){
                    resultado.push_back("ERRO");
                }
                
            }
            
            n++;
        }else{
            break;
        }
    }
    
    for(int i=0;i<(int)resultado.size();i++)
        cout<<resultado[i]<<endl;
    
    return 0;
}