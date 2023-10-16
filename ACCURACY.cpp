#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int X;
	    cin>>X;
	    if(X==0 || X%3==0)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        int temp=(X/3)+1;
	        cout<<temp*3-X<<endl;
	    }
	}
	return 0;
}
