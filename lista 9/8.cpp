#include <iostream>
#include <fstream>
using namespace std;

typedef struct 
{
    string casa;
    string cidade;
    string brasao;
} Got;

string retorno(Got struc[], string nm, char tp,int siz){
    for(int i=0;i<siz;i++){
        if(struc[i].casa == nm){
            if(tp == 'c')
                return struc[i].cidade;
            else
                return struc[i].brasao;
        }
    }
    return "fail";
}
 
int main()
{
    string nome;
    char tipo;
    int c = 0;

    cin >> nome >> tipo;

    ifstream arq("casas.txt");

    Got res[100];
    string aux;
    
    while(arq >> res[c].casa >> res[c].cidade >> res[c].brasao){
        c++;
    }
    cout << retorno(res,nome,tipo,c) << endl;
    arq.close();
    return 0;
}