#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X,Y,TEMP;
        cin>>X>>Y;
        TEMP=Y/X;
        if(Y>TEMP*X)
        {
            cout<<TEMP<<endl;
        }
        else
        {
            cout<<TEMP-1<<endl;
        }
    }
}