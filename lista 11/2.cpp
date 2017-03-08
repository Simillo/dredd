#include <iostream>

using namespace std;

const char* f(int n){
    const char** meses = new const char *[12];
    meses[0] = "Janeiro";
    meses[1] = "Fevereiro";
    meses[2] = "Marco";
    meses[3] = "Abril";
    meses[4] = "Maio";
    meses[5] = "Junho";
    meses[6] = "Julho";
    meses[7] = "Agosto";
    meses[8] = "Setembro";
    meses[9] = "Outubro";
    meses[10] = "Novembro";
    meses[11] = "Dezembro";

    return *(meses + n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
    
    return 0;
}