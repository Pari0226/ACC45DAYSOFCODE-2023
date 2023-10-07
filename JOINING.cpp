#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    int difd=(n%5!=0?(n/5)+1:(n/5));
	    
	    int d=0;
	    for(int i=0;i<=difd;i++){
	        if(k<=(5*i)){
	            d=i;
	            break;
	        }
	    }
	    cout<<(difd-d)<<endl;
	}
	return 0;
}
