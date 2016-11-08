#include <iostream>
using namespace std;

int main()
{
    int t,d;
    
    cin>>t>>d;
    
    int m[t][t];
    
    for (int i=0;i<t;i++)
		for(int j=0;j<t;j++)
			cin>>m[i][j];
	
	int metade = (t/2)+1,s=0;
	
	for(int i=0;i<t;i++)
		for(int j=0;j<t;j++)
			if(i == metade-d-1){
				if(j>=metade-d-1&&j<=metade+d-1)
					s+=m[i][j];
			}else if(i==metade+d-1){
				if(j>=metade-d-1&&j<=metade+d-1)
					s+=m[i][j];
			}else if(j == metade-d-1){
				if(i>=metade-d-1&&i<=metade+d-1)
					s+=m[i][j];
			}else if(j==metade+d-1){
				if(i>=metade-d-1&&i<=metade+d-1)
					s+=m[i][j];
			}
	cout<<s<<endl;
	
    return 0;
}
