#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    string s=" ";
	    cin>>s;
	    
	    int count=0;
	    for(long long i=1;i<n;i++){
	        if(s[i]=='0' && s[i-1]=='1'){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
