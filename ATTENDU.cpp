#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int k,count=0,j;
	    string str;
	    cin>>k;
	    cin>>str;
	    for( int i=0;i<k;i++){
	        
	        if(str[i]=='1')count++;
	    }
	    count=count+(120-k);
	    if(count>=90)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
