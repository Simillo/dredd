#include <iostream>
#include <cmath>

using namespace std;
typedef struct {
    float x,y;
    float dist;
} Posi;
int main(){
    int a;
    cin >> a;
    float posx,posy;
    cin >> posx >> posy;
    int n;
    cin >> n;
    Posi v[n];
    for(int i=0;i<n;i++){
        cin >> v[i].x >> v[i].y;
        v[i].dist = sqrt(pow(posx,v[i].x,2)+pow(posy,v[i].y,2)); 
    }
    return 0;
}