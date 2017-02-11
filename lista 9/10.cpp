#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    vector<string> va;
    vector<string> vb;

    string txt;

    int c1 = 0, c2 = 0;

    ifstream arq1("arquivoA.txt");
    ifstream arq2("arquivoB.txt");
    
    while(arq1 >> txt){
        va.push_back(txt);
        c1++;
    }
    while(arq2 >> txt){
        vb.push_back(txt);
        c2++;
    }

    ofstream saida("arquivoC.txt");
    
    int q = c1 > c2 ? 1 : c1 < c2 ? 2 : 0;
    
    if (q == 0){
        for(int j = 0; j < c1; j++)
            saida << va[j] << " " << vb[c2-j-1] << " ";
    }else if(q == 1){
        for(int j = 0 ; j < c1 ; j++)
            if(j < c2)
                saida << va[j] << " " << vb[c2-j-1] << " ";
            else
                saida << va[j] << " ";
    }else if(q == 2){
        for(int j = 0 ; j < c2 ; j++)
            if(j < c1)
                saida << va[j] << " " << vb[c2-j-1] << " ";
            else
                saida << vb[c2-j-1] << " ";
    }
    
    saida << endl;
    saida.close();
    arq2.close();
    arq1.close();
    
    return 0;
}
