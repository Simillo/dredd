nclude <iostream>
#include <fstream>

using namespace std;
double phi (double p){
	return p==1?1:1+(1/(phi(p-1)));
}
int main()
{
    int q;
    cin >> q;
    
    ofstream saida("phi.txt");
    cout << phi(q) << endl;
    for(int i = 1; i<=q;i++)
	saida << phi(i) << endl;
			
	saida.close();
return 0;
}

