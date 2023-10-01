#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    if(N==1)
	    {
	        cout<<"0"<<endl;
	    }
	    else if(N>1)
	    {
	        cout<<(N*N/2)<<endl;
	    }
	}
	return 0;
}
