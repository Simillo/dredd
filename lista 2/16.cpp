#include <iostream>
using namespace std;

int main()
{
    int ano;
    
    cin>>ano;
    
    cout<<(((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))<<endl;
    return 0;
}
