#include <iostream>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    cout<<"\n";
	    cin>>Y;
	    cout<<"\n";
	    if(X>Y)
	    {
	        cout<<(X-Y);
	        cout<<"\n";
	    }
	    else
	    {
	        cout<<0;
	        cout<<"\n";
	    }
	}
	return 0;
}
