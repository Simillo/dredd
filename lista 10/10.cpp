#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

typedef struct {
    float x,y;
    float dis;
} Pontos;

float calc(float x1, float x2 ,float y1,float y2){
    return sqrt(pow(x2-x1,2) + pow(y2-y1,2));
}

vector<Pontos> ord(vector<Pontos> v,int q){
    for(int i=0;i<q;i++){
        for(int j=i+1;j<q;j++){
            if(v[i].dis > v[j].dis){
                float aux = v[i].dis;
                v[i].dis = v[j].dis;
                v[j].dis = aux;
                
                aux = v[i].x;
                v[i].x = v[j].x;
                v[j].x = aux;

                aux = v[i].y;
                v[i].y = v[j].y;
                v[j].y = aux;
            }
        }
    }
    return v;
}

int main(){
    vector<float> ref;
    float aux;

    cin >> aux;
    ref.push_back(aux);

    cin >> aux;
    ref.push_back(aux);

    vector<Pontos> pts;
    pts.push_back(Pontos());
    
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        float xa,xy;

        cin >> xa;
        pts[i].x = xa;

        cin >> xy;
        pts[i].y = xy;

        pts[i].dis = calc(ref[0],pts[i].x,ref[1],pts[i].y);

        pts.push_back(Pontos());
    }

    pts = ord(pts,q);
    for(int i=0;i<q;i++)
        cout << pts[i].dis << " " << pts[i].x << " " << pts[i].y << endl;

}