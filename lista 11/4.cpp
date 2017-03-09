#include <iostream>
using namespace std;

typedef struct {
    int C;
    int H;
} Hidrocarboneto;


int main()
{
	Hidrocarboneto* h = new Hidrocarboneto();
    cin >> h->C;
    cin >> h->H;

    cout << (h->C * 12)+h->H << endl;
    return 0;
}
