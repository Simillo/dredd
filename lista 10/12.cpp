#include <iostream>

using namespace std;

int indexOf(int v[], int b, int n){
    for(int i=0;i<n;i++)
        if(v[i] == b)
            return i;
    return -1;
} 

int main(){

    int n, k;
    cin >> n >> k;
    int v[n];

    for(int i=0;i<n;i++)
        cin >> v[i];

    int maiorProduto = 1;

    for (int i=0; i<k; i++)
        maiorProduto *= v[i];
 
    int produtoAnterior = maiorProduto;
    
    for (int i=1; i<=n-k; i++){
        int produtoAtual=(produtoAnterior/v[i-1])*v[i+k-1];
        maiorProduto=max(maiorProduto, produtoAtual);
        produtoAnterior=produtoAtual;

    }
    cout << maiorProduto << endl;
}