#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N,X;
	    cin>>N>>X;
	    if(X==0)
	    {
	        cout<<0<<endl;
	    }
	    else if(N==X)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        int temp=N-X;
	        if(temp>X)
	        {
	            cout<<X<<endl;
	        }
	        else
	        cout<<temp<<endl;
	    }
	}
	return 0;
}
	 