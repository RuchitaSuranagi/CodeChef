#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n , t, cost;
    cin>>t;
    while(t!=0){
        t-=1;
        cin>>n;
        int s[n], p[n], v[n];
        for(int i=0; i<n; i++){
            cin>>s[i]>>p[i]>>v[i];
        }
    int max=0;
    for(int i=0;i<n;i++){
        cost = floor(p[i]/(s[i]+1))*v[i];
        if(cost>max){
            max = cost;
        }
    }
     cout<<max<<endl;   
    }
	
	return 0;
}
