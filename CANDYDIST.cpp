#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N,M;
	    cin>>N>>M;
	    if((N/M)%2==0 && N%M==0)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else 
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
