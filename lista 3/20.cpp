#include <iostream>
#include <cmath>

using namespace std;


int main() {
   double n, i, j, f, pi=1;
      
   cin>>n;
    
   for(i = n; i > 1; i--) {
      f = 2;
      for(j = 1; j < i; j++){
         f = 2 + sqrt(f);
      }
      f = sqrt(f);
      pi = pi * f / 2;
   }
   pi *= sqrt(2) / 2;
   pi = 2 / pi;
   
   cout<<pi<<endl;

}
