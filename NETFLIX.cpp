#include <iostream>
using namespace std;

int main() {
	int T,A,B,C,X;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C>>X;
	    if(X<=(A+B) || X<=(B+C) || X<=(A+C))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}