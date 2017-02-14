#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cin >> v[i]; 
    }
    for(int i=0;i<n-1;i++){
        int menor = i;
        for(int j=i+1;j<n;j++)
            if(v[menor] < v[j])
                menor = j;
        if(menor != i){
            int aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
    }
    for(int i=0;i<n;i++)
        cout << v[i] << " ";
    return 0;
}