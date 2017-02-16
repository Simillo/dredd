#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++)
        cin >> v[i];
    for(int i=1;i<n;i++){
        int x = v[i];
        int j = i-1;
        while(j>=0 && v[j] > x){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = x;
        for(int q=0;q<n;q++)
            cout << v[q] << " ";
        cout << endl;
    }
    return 0;
}