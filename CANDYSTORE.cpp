#include <iostream>
using namespace std;

int main()
{
    int T,X,Y;
    cin>>T;
    cout<<"\n";
    while(T--)
    {
        cin>>X;
        cin>>Y;
        if(X>=Y)
        {
            cout<<Y<<endl;
        }
        else
        {
            cout<<(X+((Y-X)*2))<<endl;
        }
    }
	return 0;
}
