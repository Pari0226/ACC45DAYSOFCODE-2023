#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    int a=x+y;
	    int b=y+z;
	    int c=x+z;
	    if(w==x || w==y || w==z || w==a || w==b || w==c || w==x+y+z)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
