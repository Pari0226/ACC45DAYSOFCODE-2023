#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
       int x;
       cin>>x;
       if(x==1 || x%2==0)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
	return 0;
}

