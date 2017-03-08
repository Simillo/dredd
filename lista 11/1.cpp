#include <iostream>
#include <cmath>

using namespace std;

typedef struct {
	float tempo;

} Tempos;

int main()
{
    Tempos* t = new Tempos[8];
	float menor;
    for(int i=0;i<8;i++){
		cin >> t[i].tempo;
	}
	int index = 0;
	menor = t[0].tempo;
	for(int i=0;i<8;i++){
		if(t[i].tempo < menor){
			menor = t[i].tempo;
			index = i;
		}
	}
		
    for(int i=0;i<8;i++){
		if(index != i)
			cout << (t[i].tempo - menor) << endl;
		else
			cout << menor << endl;
	}
    return 0;
}
