#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int ans=0;
        int i=2;
        while(i<=n){
            ans++;
            i=i+7;
        }
        cout<<ans<<endl;
    }
    return 0;
}