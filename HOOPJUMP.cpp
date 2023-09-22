#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	cout<<"\n";
	while(T--) {
	    int N;
	    cin>>N;
	    cout<<"\n";
	    if(N==1) {
	        cout<<N<<endl;
	        cout<<"\n";
	    }
	    else {
	        cout<<(N/2)+1<<endl;
	        cout<<"\n";
	    }
	}
	return 0;
}