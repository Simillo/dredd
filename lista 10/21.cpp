#include <iostream>
#include <fstream>
using namespace std;

void j(int v[], int ini, int meio,int fim, int aux[]){
    int esq = ini;
    int dir = meio;
    for(int i=ini;i<fim;i++){
        if((esq<meio)&&((dir>=fim) || (v[esq] < v[dir]))){
            aux[i] = v[esq];
            esq++;
        }else{
            aux[i] = v[dir];
            dir++;
        }
    }
    for(int i=ini;i<fim;i++)
        v[i] = aux[i];
}
void ms(int v[], int ini, int fim, int aux[]){
    if((fim - ini)>1){
        int meio = (ini+fim)/2;
        ms(v,ini,meio,aux);
        ms(v,meio,fim,aux);
        j(v,ini,meio,fim,aux);
    }
}
void ms(int v[], int t){
    int aux[t];
    ms(v,0,t,aux);
}

int main(){
    fstream arq("entrada.txt");
    ofstream sai("saida.txt");
    int n1,n2,n3;

    arq >> n1;
    int v1[n1];
    for(int i=0;i<n1;i++)
        arq >> v1[i];

    arq >> n2;
    int v2[n2];
    for(int i=0;i<n2;i++)
        arq >> v2[i];
    
    arq >> n3;
    int v3[n3];
    for(int i=0;i<n3;i++)
        arq >> v3[i];

    int c = n1+n2+n3;
    int v[c], i;
    for(i=0;i<n1;i++)
        v[i] = v1[i];
    
    for(int q = 0;i<n1+n2;i++)
        v[i] = v2[q++];

    for(int q = 0;i<c;i++)
        v[i] = v3[q++];

    ms(v,c);
    for(i=0;i<c;i++)
       sai << v[i] << " " ;
    return 0;
}