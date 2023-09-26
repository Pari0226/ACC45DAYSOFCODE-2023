#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int A1,A2,A3,A4,A5,P ;
        cin>>A1>>A2>>A3>>A4>>A5>>P;
        int temp;
        temp=P*(A1+A2+A3+A4+A5);
        if(temp>120)
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
