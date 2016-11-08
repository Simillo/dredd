#include<iostream>

using namespace std;
 
int main(){
	
    int l;
    
    cin>>l;
 
    for (int i=0;i<l;i++){
        int val=1;
        for (int j=0;j<=i;j++){
            cout<<val<<" ";
            val=val*(i-j)/(j+1);
        }
        cout<<endl;
    }
    
    return 0;
}
