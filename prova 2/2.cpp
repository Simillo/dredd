#include <iostream>

using namespace std;

int main(){

	int m[5][5];
	int v[10];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> m[i][j];

	for (int i = 0; i < 10; i++)
		cin >> v[i];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			for (int k = 0; k < 10; k++)
				if(m[i][j] == v[k])
					m[i][j] = -1;

	int soma = 0;

	// bingo na linha

	for (int i = 0; i < 5; i++){
		soma = 0;
		for (int j = 0; j < 5; j++)
			soma+=m[i][j];
		if(soma == -5){
			cout << 1 << endl;
			return 0;
		}
	}

	// bingo na coluna

	for (int i = 0; i < 5; i++){
		soma = 0;
		for (int j = 0; j < 5; j++)
			soma+=m[j][i];
		if(soma == -5){
			cout << 2 << endl;
			return 0;
		}
	}

	//bingo na diagonal principal

	soma = 0;
	
	for (int i = 0; i < 5; i++){
		soma+=m[i][i];
		if(soma == -5){
			cout << 3 << endl;
			return 0;
		}
	}

	//bingo na diagonal secundária

	soma = 0;

	for (int i = 0; i < 5; i++){
		soma+=m[i][4-i];
		if(soma == -5){
			cout << 4 << endl;
			return 0;
		}
	}

	//bingo inexistente

	cout << -1 << endl;
	return 0;
}
