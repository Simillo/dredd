#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int limite;
    cin >> limite;
    int v[limite];

    for(int i=2;i<limite;i++)
        v[i] = 1;
    for(int i=2;i<limite;i++)
        if(v[i])
            for(int j=i;(j*i)<limite;j++)
                v[j*i] = 0;
    ofstream saida("saida.txt");
    int c = 0;
    for(int i=2;i<limite;i++){
        if(v[i]){
            saida << i;
            if(c==5){
                saida << endl;
                c=0;
            }else{
                saida << " ";
                ++c;
            }
        }
    }
    saida.close();
    return 0;
}