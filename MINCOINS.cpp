#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,n,i;
	    cin>>a;
	    if(a%5==0)
	    {         
	        int A= a/10;
	        if(a==A * 10)
	        cout<<A<<endl;
	        else
	        {
	            cout<<A+1<<endl;
	        }
	    }
	    else 
	    {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}