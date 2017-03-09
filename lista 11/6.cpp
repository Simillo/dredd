#include <iostream>

using namespace std;

int main()
{
    int s;
    cin >> s;

    int** m = new int *[s];

    for(int i=0;i<6;i++)
        m[i] = new int [6];
    for(int i=0;i<s;i++)
        for(int j=0;j<6;j++)
            cin >> m[i][j];
    int ma = 0, index = 0;
    for(int i=0;i<s;i++){
        int s = 0;
        for(int j=0;j<6;j++)
            s+=m[i][j];      
        if(s>ma){
            ma = s;
            index = i;
        }                
    }
    for(int j=0;j<6;j++)
        cout << m[index][j] << " ";
    cout << endl;
    
    return 0;
}
