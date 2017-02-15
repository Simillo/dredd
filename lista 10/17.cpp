#include <iostream>
#include <vector>

using namespace std;

int main(){
  
  vector<float> v;
  while(true){
    float aux;
    cin >> aux;
    if(aux>=0)
      v.push_back(aux);
    else
     break;
  }
  int s = v.size();
  for(int i=0;i<s;i++)
    for(int j=i+1;j<s;j++)
      if(v[i] > v[j]){
	float aux = v[i];
	v[i] = v[j];
	v[j] = aux;	
      }
  if(s%2==0){
    float sum = (v[s/2] + v[s/2-1]) /2;
    cout << sum << endl;
  }else
    cout << v[s/2] << endl;
  return 0;
}
