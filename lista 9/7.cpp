#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
 
bool isprime(int n){
    if(n == 1 || n == 0) return false;
    for(int i=2;i<=n/2+1;i++)
        if(n%i==0) return false;
    return true;
}
 
int main()
{
    string sai;
    vector<int> v;
    ifstream arq("entrada.txt");
    int ent;
    while(arq >> ent){
        v.push_back(ent);
        if(isprime(ent))
            break;
    }
    arq >> sai;
    int s = v.size();
    for(int i=0;i<s;i++)
        for(int j=i+1;j<s;j++)
            if(v[i] > v[j]){
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    int sum = 0, menor = 99999999, seg = 9999999;
    for(int i=0;i<s;i++){
        if(v[i] < menor){
            seg = menor;
            menor = v[i];
        }else if(v[i] < seg)
            seg = v[i];
        sum+=v[i];
    }
    ofstream saida(sai.c_str());
    
    saida << menor << " " << seg << " " << sum-menor-seg << endl;
    saida.close();
    arq.close();
    return 0;
}