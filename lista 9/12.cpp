#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string nome;

    cin >> nome;
    
    ifstream arq(nome.c_str());
    
    vector<string> v;

    ofstream saida("cifrado");
    
    vector<string> newv;

    string aux;
    
    while(getline(arq,aux)){
        v.push_back(aux);

        string newStr = "";
        
        for(int i = 0; i < (int) aux.size();i++){   
            newStr+=(aux[i]-65+3)%26+65;
            if(newStr[i] == '=')
                newStr[i] = ' ';
        }

        saida << newStr << endl;
    }
    saida.close();
    arq.close();
    return 0;
}
