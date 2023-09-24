#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	cout<<endl;
	while(T--)
	{
	    int PA,PB,PC;
	    cin>>PA>>PB>>PC;
	    if((PA+PC)>PB)
	    {
	        cout<<(PA+PC)<<endl;
	    }
	    else 
	    cout<<PB<<endl;
	    
	}
	return 0;
}
