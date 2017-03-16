#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char* s1 = new char();
    char* s2 = new char();
    cin.getline(s1,255);
    cin.getline(s2,255);
    cout << strcat(s1,s1) << endl;
    return 0;
}
