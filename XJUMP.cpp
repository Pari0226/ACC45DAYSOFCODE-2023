#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int X,Y;
	    cin>>X>>Y;
	    if(Y>X)
	    {
	        cout<<X<<endl;
	    }
	    else if(X/Y==0)
	    {
	        cout<<(X-Y)<<endl;
	    }
	    else
	    {
	        int temp=(X-((X/Y)*Y));
	        cout<<(X/Y)+temp<<endl;
	    }
	}
	return 0;
}
