#include <iostream>

using namespace std;

int main(){
	
	int i, j, x, y, l, c ;
	
	cin >> l >> c;
	
	int m[l][c], o[l][c];
	
	for(i = 0 ; i < l ; i++)
		for(j = 0 ; j < c ; j++){
			cin >> o[i][j];
			m[i][j] = o[i][j];
 		}

 	for(i = 1 ; i < l - 1 ; i++)
 		for (j = 1 ; j < c - 1 ; j++){
 			
 			int soma = 0;

 			for(x = i - 1 ; x < i + 2 ; x++)
 				for(y = j - 1; y < j + 2; y++)
 					soma += o[x][y];
 			m[i][j] = soma/9;
 		}

 	for(i = 0 ; i < l ; i++){
 		for(j = 0 ; j < c ; j++)
 			cout << m[i][j] << " ";
 		cout << endl;
 	}
	
	return 0;
}
