#include <iostream>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	cout<<endl;
	while(T--)
	{
	    cin>>X;        //following count
	    cout<<endl;
	    cin>>Y;       //follower count
	    cout<<endl;
	    if(X>Y*10)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
