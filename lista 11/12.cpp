#include <iostream>
using namespace std;

int f(int n){
	return n < 2? 1:n*f(n-1);
}
void obterVetor(float* v, int t){
	for(int i=0;i<t;i++)
		v[i] = (2* f(i) + i)/(i*i + 1.75);
}
int main()
{
	int n;
	cin >> n;
	float* v = new float[n];
	obterVetor(v,n);
	int m;
	cin >> m;
    for(int i=m;i<n;i++)
		cout << v[i] << endl;
		
    return 0;
}
