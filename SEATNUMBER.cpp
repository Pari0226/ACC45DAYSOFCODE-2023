#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    if(N<=10)
	    {
	        cout<<"Lower Double"<<endl;
	    }
	    else if(N>=11 && N<=15)
	    {
	        cout<<"Lower Single"<<endl;
	    }
	    else if(N>=16 && N<=25)
	    {
	        cout<<"Upper Double"<<endl;
	    }
	    else 
	    {
	        cout<<"Upper Single"<<endl;
	    }
	}
	return 0;
}
