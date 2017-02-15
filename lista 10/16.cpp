#include <iostream>

using namespace std;

typedef struct {
  int cod;
  float valor;
} Clientes;

int main(){
  
  Clientes clt[100];

  int q=0;

  while(true){
    int c;
    cin >> c;
    if(c != -1){
      clt[q].cod = c;
      cin >> clt[q].valor;
      q++;
    }else
      break;    
  }
  float o;
  cin >> o;
  int ok = 0;
  for(int i=0;i<q;i++)
    for(int j=i+1;j<q;j++)
      if(clt[i].valor > clt[j].valor){
      	float aux = clt[i].valor;
	clt[i].valor = clt[j].valor;
	clt[j].valor = aux;
	
	int c = clt[i].cod;
	clt[i].cod = clt[j].cod;
	clt[j].cod = c;
	if(clt[i].valor >= o)
	  ok = 1;
      }
  if(ok){
    for(int i=0;i<q;i++)
      if(clt[i].valor >= o)
	cout << clt[i].cod << " " << clt[i].valor << endl;
  }else
    cout << -1 << endl;
 
  return 0;
}
