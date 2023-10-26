#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	    int n,a,b;
	    cin>>n>>a>>b;
	    cout<<360+((n+1)/2)*2+(n/2)*2-(a+b)<<endl;
	}
	return 0;
}
