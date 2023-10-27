#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int c=1;
	    for(int i=0;i<s.size()-1;i++){
	        if(s[i]!=s[i+1]) c++;
	     
	    }
	    cout<<(c/2)<<endl;
	}
	return 0;
}
