#include <iostream>
#include <cmath>

using namespace std;
typedef struct {
    string nome;
    float x,y,preco;
    float dist;
} Posi;
int main(){
    int a;
    cin >> a;
    float posx,posy;
    cin >> posx >> posy;
    int n;
    cin >> n;
    Posi v[n];
    for(int i=0;i<n;i++){
        cin >> v[i].nome >> v[i].x >> v[i].y >> v[i].preco;
        v[i].dist = sqrt(pow(posx-v[i].x,2)+pow(posy-v[i].y,2)); 
    }
    for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	   if(v[i].dist > v[j].dist){
	   	float aux = v[i].dist;
	   	v[i].dist = v[j].dist;
	   	v[j].dist = aux;
	   	
		aux = v[i].x;
		v[i].x = v[j].x;
		v[j].x = aux;
		aux = v[i].y;
		v[i].y = v[j].y;
		v[i].y = aux;
		aux = v[i].preco;
		v[i].preco = v[j].preco;
		v[j].preco = aux;
		string nom = v[i].nome;
		v[i].nome = v[j].nome;
		v[j].nome = nom;
	   }
	float sum = 0;
    for(int i=0;i<a;i++)
	sum+=v[i].preco;
    cout << sum << endl;

    return 0;
}
