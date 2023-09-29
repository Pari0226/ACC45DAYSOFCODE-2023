#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    int temp;
	    temp=Y/X;
	    if(Z<temp)
	    cout<<0<<endl;
	    else
	    cout<<(Z-temp)<<endl;
	    
	}
	return 0;
}
