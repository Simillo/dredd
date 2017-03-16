#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char* s1 = new char[100];
    char* s2 = new char[100];
    
    cin.getline(s1,100);
    cin.getline(s2,100);
	int l = strlen(s1);
	s1[l] =  ' ';
	s1[l+1] = '\0';
    char* con = new char[l+strlen(s2)+1];
    
    con = strcat(s1,s2);
    cout << con << endl;
    return 0;
}
