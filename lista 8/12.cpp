#include <iostream>

using namespace std;



float f(float v[],int n){
	float s = 0, m = 0;

	if(n==1)
		s = v[0];
	else
		s = v[n-1] + (n-1) * f(v,n-1);

	m = s/n;
	return m;
}
int main()
{
    int n;
    
    cin >> n;
    
    float vec[n];
    
    for(int i=0;i<n;i++)
		cin >> vec[i];
	
	cout << f(vec,n) << endl;;
    
    return 0;
}
