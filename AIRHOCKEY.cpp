#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int A,B;
	    cin>>A>>B;
	    if(A>=B)
	    cout<<(7-A)<<endl;
	    else
	    cout<<(7-B)<<endl;
	}
	return 0;
}
