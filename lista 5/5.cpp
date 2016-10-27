#include <iostream>
using namespace std;

int main()
{
    int l,c;
        
    cin>>l>>c;
    
    int m[l][c];
    
    for (int i = 0;i<l;i++)
		for(int j=0;j<c;j++)
			cin>>m[i][j];
			
	for(int i=0;i<l;i++)
		if(i%2!=0)
			for(int j = c-1;j>=0;j--)
				cout<<m[i][j]<<" ";
		else
			for(int j = 0;j<c;j++)
				cout<<m[i][j]<<" ";
	
    return 0;
}

