#include <iostream>
#include <vector>
using namespace std;

vector<int> r(int n){
	vector<int> q;
	if(n==0)
		q.push_back(0);
	else{
		while(n)
			q.push_back(n%10),
			n/=10;
	}
	return q;
}

int main(){
	int n;
	cin >> n;
	vector<int> v = r(n);
	for(int i=(int)v.size()-1;i>0;i--)
		cout << v[i] << " ";
	cout << v[0] << endl;
	return 0;
}