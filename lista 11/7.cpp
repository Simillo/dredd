#include <iostream>
#define f for(int i=0;i<3;i++)
using namespace std;

typedef struct {
	int pts;
} Medalhas;

int main(){
	Medalhas m[3];
	int* med = new int [3];
	f
		cin >> med[i];
	f
		cin >> m[i].pts;
	
	int s = 0;
	f	
		s+=(m[i].pts*med[i]);
	cout << s << endl;

return 0;
}
