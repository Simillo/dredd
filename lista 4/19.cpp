#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> vn,vs,vi;
	
	int i,n,b,aux,x=0,h=0;
	
	cin>>n>>b;
	while(n){
		vi.push_back(n%10);
		n/=10;
	}
	for(i = int(vi.size())-1;i>=0;i--){
		vn.push_back(vi[i]);
	}
	aux = -1;
	
	for(i=0;i<b+1;i++){
		if(vn[i]>aux){
			aux = vn[i];
			x=i;
		}
	}
	vs.push_back(aux);
	h++;
	while((int(vn.size()-b)>h)){
		for(i = x+1;i<=b+h;i++){
			if(i>int(vn.size())-int(vn.size()-b))
				aux = vn[i];
			else if(vn[i]>aux){
				aux = vn[i];
				x=i;
			}
		}
		h++;
		vs.push_back(aux);
		aux-=1;
	}
	int t = vs.size()-1,s=0,m=1;
	
	for(i=t;i>=0;i--){
		s = s+(vs[i]*m);
		m*=10;
	}
	
	if(b<int(vi.size()))
		cout<<s<<endl;
	else
		cout<<0<<endl;	
	
	return 0;
}
