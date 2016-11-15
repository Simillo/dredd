#include <iostream>
#include <vector>
using namespace std;

vector<int> r(int n){
	vector<int> q;
	while(n)
		q.push_back(n%10),
		n/=10;
	return q;
}

int main(){
	int n;
	cin >> n;
	vector<int> v = r(n);
	for(int i=(int)v.size()-1;i>=0;i--)
		cout << v[i] << " ";
	return 0;
}