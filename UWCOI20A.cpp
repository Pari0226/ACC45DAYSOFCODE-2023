#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int height[N],max=0;
        for(int i=1;i<=N;i++)
        {
            cin >> height[i];
            if(height[i] > max)
            {
                max=height[i];
            }
        }
        cout<<max<<endl;
    }
}