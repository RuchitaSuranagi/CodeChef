#include <iostream>
using namespace std;

int main() {
	int t,i,j,count;
	
	cin>>t;
	int m,s;
	for(i=0; i<t; i++){
        cin>>m>>s;
        count=0;
	    while(m>=s){
	        count++;
	        m=m-s;
	    }
	    cout<<count<<endl;
    }

	return 0;
}
