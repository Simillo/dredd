#include <iostream>
#include <cstdlib>
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
    vector<string> v;
    ifstream arq("entrada.txt");
    string ent;
   
    while(arq >> ent)
        v.push_back(ent);
   
    int s = v.size() -2;
    string nome = v[s+1];
    vector<int> vInt;
   
    for(int i=0;i<s;i++)
        vInt.push_back(atoi(v[i].c_str()));
   
    int menor = vInt[0], seg = vInt[1], sum = menor + seg;
    for(int i=2;i<s;i++){
        if(vInt[i] < menor){
            seg = menor;
            menor = vInt[i];
        }else if(vInt[i] < seg)
            seg = vInt[i];
        sum+=vInt[i];
    }
    ofstream saida(nome.c_str());
    saida << menor << " " << seg << " " << sum << endl;
    saida.close();
    //int aux = atoi(v[i].c_str());
    arq.close();
    return 0;
}