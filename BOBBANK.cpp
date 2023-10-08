#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int w;
	    cin>>w;
	    int x,y,z;
	    cin>>x>>y>>z;
	    cout<<w+((x-y)*z)<<endl;
	}
	return 0;
}
