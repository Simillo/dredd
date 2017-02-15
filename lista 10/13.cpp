#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
  ifstream arq("entrada.txt");
  
  vector<char> v;
  
  char ent;
  //cout << "oi " << endl;
  while(arq >> ent){
    v.push_back(ent); 
  }
  vector<int> vint;
  
  int s = v.size();
  
  for(int i=0;i<s;i++)
    vint.push_back((int) v[i]);
  
  for(int i=0;i<s;i++)
    for(int j=i+1;j<s;j++)
      if(vint[i] > vint[j]){
        int aux = vint[i];
	vint[i] = vint[j];
	vint[j] = aux;
      }
  ofstream saida("saida.txt");
  for(int i=0;i<s;i++)
    saida << (char)vint[i] << " "; 
  saida << endl;
  saida.close();
  return 0;
}
