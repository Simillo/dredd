//http://www.bragitoff.com/2015/09/c-program-for-gauss-elimination-for-solving-a-system-of-linear-equations/


#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int n,i,j,k;
	      
    cin>>n;
    
    cout<<fixed;
    cout<<setprecision(1);
    
    float a[n][n+1],x[n];        
	  
    for (i=0;i<n;i++)
        for (j=0;j<=n;j++)    
            cin>>a[i][j];    
            
    for (i=0;i<n;i++)                    
        for (k=i+1;k<n;k++)
            if (a[i][i]<a[k][i])
                for (j=0;j<=n;j++)
                {
                    double temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }
  
    for (i=0;i<n-1;i++)            
        for (k=i+1;k<n;k++)
            {
                double t=a[k][i]/a[i][i];
                for (j=0;j<=n;j++)
                    a[k][j]=a[k][j]-t*a[i][j];
            }
    
    for (i=n-1;i>=0;i--)
    {                        
        x[i]=a[i][n];                
        for (j=0;j<n;j++)
            if (j!=i)
                x[i]=x[i]-a[i][j]*x[j];
        x[i]=x[i]/a[i][i];            
    }
    
    for (i=0;i<n;i++){
    	for (j=0;j<=n;j++){
    		if(j==i)
    			cout<<float(1)<<" ";
        	else if(j<n)
				cout<<float(0)<<" ";
			else
				cout<<float(x[i])<<" ";   
		}
		cout<<endl;
	}
    return 0;
}

