#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	char t1[255],t2[255];
	
	cin>>t1>>t2;
	
	int len1 = strlen(t1),len2 = strlen(t2),counter = 0,h=1;
	
	for(int i=0;i<len1;i++){
		for(int j = 0;j<len2;j++){
			if(t1[i] == t2[j]){
				for(int x = i,c = 0;x<len1;x++){
					if(t1[x]==t2[c++])
						counter++;
					else
						break;
				}
				if(counter == len2){
					cout<<i<<endl;
					h = 0;
				}else
					counter = 0;
			}
		}
		if(!h)
			break;
	}
	if(h)
		cout<<-1<<endl;
		
	return 0;
}
