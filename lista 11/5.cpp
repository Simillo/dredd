#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char* s1 = new char[100];
    char* s2 = new char[100];
    
    cin.getline(s1,100);
    cin.getline(s2,100);

    char* con = new char[strlen(s1)+strlen(s2)];
    
    con = strcat(s1,s2);
    cout << con << endl;
    return 0;
}
