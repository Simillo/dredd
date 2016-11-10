#include <iostream>
#include <cstring>

using namespace std;

typedef struct
{
	int entrada[7];
	int saida[7];
	char gnome[100];
} Santa;

int main(){
	int qnt;

	cin >> qnt;

	Santa g[qnt];

	for (int i = 0; i < qnt; i++){
		cin >> g[i].gnome;

		for(int j = 0; j < 7; j++)
			cin >> g[i].entrada[j] >> g[i].saida[j];
	}

	for(int i = 0;i<qnt;i++){
		cout << g[i].gnome << endl;
		for(int j = 0;j<7;j++)
			cout<<g[i].entrada[j] << " " << g[i].saida[j] << endl;
	}



	return 0;
}