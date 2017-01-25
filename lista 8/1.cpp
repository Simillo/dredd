#include <iostream>
using namespace std;


double phi (double p){
	return p==1?1:1+(1/(phi(p-1)));
}
int main()
{
	double n;
	cin >> n;
    cout << phi(n) << endl;
    return 0;
}
