#include <iostream>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	while(T--) {
	    int n,x,d;
	     cin >> n >> x >> d;
	    
	    int overall_requirement = x*5;
	    
	    int d1 = n/overall_requirement;
	    int survive = d1 + d;
	    cout<<survive<<endl;
	    
	}
	return 0;
}
