#include <iostream>

using namespace std;

//RECURSÃO

//
//int f(int n){
//	return n<=3?1:f(n-1)+f(n-2);
//}
//
//int main(){
//	int n,s=0,aux;
//	
//	cin>>n;
//	cout<<0<<endl;
//	for(int i=2;i<=n;i++)
//		cout<<f(i)<<endl;
//	
//	return 0;
//}

int main(){
	int n, c, f = 0, aux = 1, p;

   cin >> n;
   for (c=0;c<n;c++){
    	if (c<=1)
    		p=c;
      	else{
			p = f + aux;
        	f = aux;
        	aux = p;
		}
		cout << p << endl;
	}
 
   return 0;
}
