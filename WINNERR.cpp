#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int pa,pb,qa,qb,mp,mq;
        cin>>pa>>pb>>qa>>qb;
        if(pa>=pb)
        mp=pa;
        else
        mp=pb;
        if(qa>=qb)
        mq=qa;
        else
        mq=qb;
        if(mp>mq)
        cout<<"Q"<<endl;
        else if(mp==mq)
        cout<<"TIE"<<endl;
        else
        cout<<"P"<<endl;
    }
	return 0;
}
