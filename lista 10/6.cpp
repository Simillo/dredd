#include <iostream>
#include <vector>

using namespace std;

typedef struct{
    int id;
    string nome;
    float hora;
    float total;
} Funcionario;

float calc(float n){
    return n*8*20;
}

vector<Funcionario> ord(vector<Funcionario> func, int n){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(func[i].id > func[j].id){
                int ia = func[i].id;
                func[i].id = func[j].id;
                func[j].id = ia;
                string s = func[i].nome;
                func[i].nome = func[j].nome;
                func[j].nome = s;
                float h = func[i].hora;
                func[i].hora = func[j].hora;
                func[j].hora = h;
                float t = func[i].total;
                func[i].total = func[j].total;
                func[j].total = t;
            }
    return func;
}


int main(){
    int n;
    cin >> n;
    vector<Funcionario> func;

    func.push_back(Funcionario());

    for(int i=0;i<n;i++){
        int cod;
        cin >> cod;
        func[i].id = cod;

        string aux;
        cin >> aux;
        func[i].nome = aux;

        float hr;
        cin >> hr;
        func[i].hora = hr;

        func[i].total = calc(func[i].hora);
        func.push_back(Funcionario());
    }
    
    func = ord(func,n);

    for(int i=0;i<n;i++)
        cout << func[i].id << " " << func[i].nome << " " << func[i].total << endl;
    return 0;
}