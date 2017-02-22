#include <iostream>
using namespace std;

void QuickSort(int v[], int ini, int fim){
    if((fim-ini)<2) return;
    int pivo = v[(ini+fim)/2];

    int esq = ini;
    while(v[esq] < pivo) esq++;
    int dir = fim - 1;
    while(pivo < v[dir]) dir--;
    while(esq < dir){
        int aux = v[esq];
        v[esq] = v[dir];
        v[dir] = aux;

        do ++esq; while(v[esq]<pivo);
        do --dir; while(pivo<v[dir]); 
    }
    QuickSort(v,ini,esq);
    QuickSort(v,esq,fim);
}

void BubbleSort(int v[], int n){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(v[i]>v[j]){
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
}

int main(){
    int n,m;
    cin >> m >> n;
    int v[n];
    for(int i=0;i<n;i++)
        cin >> v[i];
    if(m>=n)
        QuickSort(v,0,n);
    else
        BubbleSort(v,n);
    for(int i=0;i<n;i++)
        cout << v[i] << " ";
    cout << endl;
}