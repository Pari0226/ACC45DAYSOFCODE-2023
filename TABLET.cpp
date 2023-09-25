#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,B;
        cin>>N>>B;
        int max=0,area;
        for(int i=0;i<N;i++)
        {
            int W,H,P;
            cin>>W>>H>>P;
            if(P<=B)
            {
                area=W*H;
                if(area>max)
                {
                    max=area;
                }
            }
        }
        
        if(max==0)
        {
            cout<<"no tablet"<<endl;
        }
        else
        {
            cout<<max<<endl;
        }
    }
    return 0;
}