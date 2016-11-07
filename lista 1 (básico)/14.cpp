#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int mm,h,m;
	float s;
	
	cin>>mm;
	
	h = mm/(1000*60*60)%24;
	m = mm/(1000*60)%60;
	s = (float)(mm/1000%60);
	
	std::cout << std::setprecision(1) << std::fixed;
	
	cout<<h<<" : "<<m<<" : "<<s<<endl;
	return 0;
}
